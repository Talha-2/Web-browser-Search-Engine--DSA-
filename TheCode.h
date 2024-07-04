#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include<list>
#include <vector>
#include<filesystem>
#include <fstream>
#include <sstream>
#include <cctype> 
#include <ctime>
#include <chrono>

using namespace std;

namespace fs = std::filesystem;

// TrieNode for file content
struct TrieNode {
    TrieNode* child_node[26];
    bool word_end;
    int count; // Count of occurrences for the end of a word

    TrieNode() {
        word_end = false;
        count = 0;
        for (int i = 0; i < 26; i++) {
            child_node[i] = nullptr;
        }
    }
};

// Trie for file content
class Trie {
private:
    TrieNode* root;


public:
    Trie() {
        root = new TrieNode();
    }

    void insert(const string& word) {
        TrieNode* current = root;
        for (char ch : word) {

            int index = ch - 'a';
            if (current->child_node[index] == nullptr) {
                current->child_node[index] = new TrieNode();
            }
            current = current->child_node[index];
        }
        current->word_end = true;
        current->count++;
    }

    int search(const string& word) {
        TrieNode* current = root;
        for (char ch : word) {

            int index = ch - 'a';
            if (current->child_node[index] == nullptr) {
                return 0;
            }
            current = current->child_node[index];
        }
        return current->word_end ? current->count : 0;
    }

    bool starts_with(const string& prefix) {
        TrieNode* current = root;
        for (char ch : prefix) {
            int index = ch - 'a';
            if (current->child_node[index] == nullptr) {
                return false;
            }
            current = current->child_node[index];
        }
        return true;
    }

    ~Trie() {
        delete_trie(root);
    }

private:
    void delete_trie(TrieNode* node) {
        for (int i = 0; i < 26; i++) {
            if (node->child_node[i] != nullptr) {
                delete_trie(node->child_node[i]);
            }
        }
        delete node;
    }
};

// Multi-Child TreeNode for directory structure
struct DirectoryNode {
    string name;
    unordered_map<string, DirectoryNode*> children;
    Trie* file_data; // nullptr for directories, non-null for files
    list<string>adjacentVertices;               //only when is file
    DirectoryNode(const string& name, bool is_file = false) : name(name), file_data(is_file ? new Trie() : nullptr) {}

    ~DirectoryNode() {
        for (auto& child : children) {
            delete child.second;
        }
        delete file_data;
    }
};

// Multi-Child Tree for directories and files
class FileSystem {
private:
    DirectoryNode* root;
    list<DirectoryNode*>vertices;                   //has all the files
    list<string> cache;                    //previous searches

    vector<string> split_path(const string& path) {
        vector<string> result;
        string temp;
        for (char ch : path) {
            if (ch == '/') {
                if (!temp.empty()) {
                    result.push_back(temp);
                    temp.clear();
                }
            }
            else {
                temp += ch;
            }
        }
        if (!temp.empty()) {
            result.push_back(temp);
        }
        return result;
    }

    unordered_map<string, int> search_word_in_files(const string& word) {
        unordered_map<string, int> result;
        search_word_in_files_helper(root, word, "", result);
        return result;
    }

    void search_word_in_files_helper(DirectoryNode* node, const string& word, const string& path, unordered_map<string, int>& result) {
        if (node->file_data != nullptr) {
            int count = node->file_data->search(word);
            if (count > 0) {
                result[path] += count;
            }
        }
        for (const auto& child : node->children) {
            search_word_in_files_helper(child.second, word, path + "/" + child.first, result);
        }
    }
public:
    FileSystem() {
        root = new DirectoryNode("/");
    }

    void add_directory(const string& path) {
        DirectoryNode* current = root;
        vector<string> directories = split_path(path);
        for (const string& dir : directories) {
            if (current->children.find(dir) == current->children.end()) {
                current->children[dir] = new DirectoryNode(dir);
            }
            current = current->children[dir];
        }
    }

    string sanitize_word(const string& word) {
        string sanitized;
        for (char ch : word) {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || ch == ' ') {
                sanitized += tolower(ch); // Convert to lowercase
            }
            else if (ch == '-' || ch == '\'') {
                sanitized += ch;
            }
        }
        return sanitized;
    }


    int search(const string& word) {
        return root->file_data->search(sanitize_word(word));
    }

    Trie* get_file_data(const string& path) {
        DirectoryNode* current = root;
        vector<string> directories = split_path(path);
        for (const string& dir : directories) {
            if (current->children.find(dir) == current->children.end()) {
                return nullptr;
            }
            current = current->children[dir];
        }
        return current->file_data;
    }

    void read_directory(const string& path, const string& base_path = "") {
        if (!fs::exists(path)) {
            cerr << "Path does not exist: " << path << endl;
            return;
        }

        if (!fs::is_directory(path)) {
            cerr << "Path is not a directory: " << path << endl;
            return;
        }

        try {
            for (const auto& entry : fs::directory_iterator(path)) {
                if (entry.is_directory()) {
                    string dir_path = base_path + "/" + entry.path().filename().string();
                    add_directory(dir_path);
                    read_directory(entry.path().string(), dir_path);
                }
                else if (entry.is_regular_file() && entry.path().extension() == ".txt") {
                    string file_path = base_path + "/" + entry.path().filename().string();
                    ifstream file(entry.path());
                    if (file) {
                        string content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
                        add_file(file_path, content);
                    }
                    else {
                        cerr << "Failed to open file: " << entry.path() << endl;
                    }
                }
            }
        }
        catch (const fs::filesystem_error& e) {
            cerr << "Filesystem error: " << e.what() << endl;
        }
        catch (const std::exception& e) {
            cerr << "Exception: " << e.what() << endl;
        }
    }


    void add_file(const string& path, const string& content) {
        DirectoryNode* current = root;
        vector<string> directories = split_path(path);
        for (size_t i = 0; i < directories.size() - 1; i++) {
            const string& dir = directories[i];
            if (current->children.find(dir) == current->children.end()) {
                current->children[dir] = new DirectoryNode(dir);
            }
            current = current->children[dir];
        }

        const string& file_name = directories.back();
        if (current->children.find(file_name) == current->children.end()) {
            current->children[file_name] = new DirectoryNode(file_name, true);
        }
        vertices.push_back(current);

        // Add file content to the Trie
        if (current->children[file_name]->file_data != nullptr) {
            istringstream iss(content);
            string word;
            while (iss >> word) {
                if (word.find(".txt") && getFile(word) && (word != current->name)) {
                    makeEdge(current, word);
                }
                word = sanitize_word(word);
                current->children[file_name]->file_data->insert(word);
            }
        }
    }

    DirectoryNode* getFile(const string& path) {
        for (auto& v : vertices) {
            if (v->name == path)
                return v;
        }
        return NULL;
    }


    void makeEdge(DirectoryNode* hostfile, const string& edgeTo) {
        for (DirectoryNode* c : vertices) {
            if (c->name == edgeTo)
                hostfile->adjacentVertices.push_back(edgeTo);                   //edge added
        }
        cout << "Edge created from " << hostfile->name << " to " << edgeTo << endl;
    }

    vector<pair<string, int>> search_words_in_files(const vector<string>& words, bool and_query) {
        unordered_map<string, int> file_word_count;
        for (const string& word : words) {
            unordered_map<string, int> word_file_count = search_word_in_files(word);
            if (and_query) {
                if (file_word_count.empty()) {
                    file_word_count = word_file_count;
                }
                else {
                    for (auto it = file_word_count.begin(); it != file_word_count.end();) {
                        if (word_file_count.find(it->first) == word_file_count.end()) {
                            it = file_word_count.erase(it);
                        }
                        else {
                            it->second += word_file_count[it->first];
                            ++it;
                        }
                    }
                }
            }
            else {
                for (const auto& [file_path, count] : word_file_count) {
                    file_word_count[file_path] += count;
                }
            }
        }

        vector<pair<string, int>> result(file_word_count.begin(), file_word_count.end());
        sort(result.begin(), result.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return b.second < a.second;
            });
        return result;
    }

    // New function to display file content
    string display_file_content(const string& file_path) {
        cache.push_back(file_path);
        ifstream file(file_path);
        if (file) {
            string content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
            return content;
            cout << "File content of " << file_path << ":\n" << content << endl;
        }
        else {
            cerr << "Failed to open file: " << file_path << endl;
        }
    }

    void addToCache(const string& input) {
        cache.push_back(input);
    }
    void displayCache() {
        cout << "\nSearch History:\n";
        for (string c : cache)
            cout << c << endl;
    }

    void searchThroughCache(string& query) {
        for (string c : cache) {
            if (c == query) {
                cache.remove(query);
                cache.push_front(query);
                //displayCache();
                break;
            }
        }
    }

    void browserSearch(string& input) {
        while (true) {
            cout << "\nEnter 'q' to quit." << endl;
            cout << "Enter search query or file path: ";
            getline(cin, input);
            if (input == "q") {
                cout << "Quitting..." << endl;
                displayCache();
                break;
            }
            else
                addToCache(input);

            auto start_time = chrono::steady_clock::now(); // Start timing

            if (input.find(".txt") != string::npos) {
                /// Display file content if file exists
                display_file_content(input);
            }
            else {
                // Otherwise, treat input as a search query
                string s_input = sanitize_word(input);

                vector<string> words;
                istringstream iss(s_input);
                string word;
                while (iss >> word) {
                    words.push_back(word);
                }

                bool and_query = false;
                if (input.find("and") != string::npos) {
                    and_query = true;
                }

                vector<pair<string, int>> search_results = search_words_in_files(words, and_query);
                if (search_results.empty()) {
                    cout << "No matching files found." << endl;
                }
                else {
                    cout << "Search results:" << endl;
                    for (const auto& [file_path, count] : search_results) {
                        cout << file_path << " : " << count << " occurrences" << endl;
                    }
                }
            }

            auto end_time = chrono::steady_clock::now(); // End timing
            auto elapsed_time = chrono::duration_cast<chrono::milliseconds>(end_time - start_time); // Calculate elapsed time
            cout << "Response time: " << elapsed_time.count() << " milliseconds" << endl; // Print response time
        }
    }

    ~FileSystem() {
        delete root;
    }
};


