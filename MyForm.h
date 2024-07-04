#pragma once
#include "TheCode.h"
#include <string>
#include <msclr/marshal_cppstd.h>





namespace final_dsa_project{
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            obj = new FileSystem();
            obj->read_directory("D:\\DSA_Docs");

            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
      
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
           FileSystem* obj;
    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 54, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::RosyBrown;
            this->label1->Location = System::Drawing::Point(500, 150);
            this->label1->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(390, 82);
            this->label1->TabIndex = 0;
            this->label1->Text = L"RootCanal.";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(420, 150);
            this->label2->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(97, 29);
            this->label2->TabIndex = 0;
            this->label2->Text = L"";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(420, 210);
            this->label3->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(100, 29);
            this->label3->TabIndex = 0;
            this->label3->Text = L"";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(420, 270);
            this->label4->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(100, 29);
            this->label4->TabIndex = 0;
            this->label4->Text = L"";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(420, 330);
            this->label5->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(101, 29);
            this->label5->TabIndex = 0;
            this->label5->Text = L"";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(420, 390);
            this->label6->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(100, 29);
            this->label6->TabIndex = 0;
            this->label6->Text = L"";
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(420, 450);
            this->label7->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(101, 29);
            this->label7->TabIndex = 0;
            this->label7->Text = L"";
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(420, 510);
            this->label8->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(99, 29);
            this->label8->TabIndex = 0;
            this->label8->Text = L"";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(420, 570);
            this->label9->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(101, 29);
            this->label9->TabIndex = 0;
            this->label9->Text = L"";
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // label10
            // 
            this->label10->BackColor = System::Drawing::Color::White;
            this->label10->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(100, 100);
            this->label10->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(1100, 500);
            this->label10->TabIndex = 0;
            this->label10->Text = L"";
            // 
            // comboBox1
            // 
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(420, 250);
            this->comboBox1->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(400, 36);
            this->comboBox1->TabIndex = 1;
            this->comboBox1->Text = L"Search rootcanal";
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(850, 245);
            this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(120, 45);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Search";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(10, 10);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(54, 38);
            this->button2->TabIndex = 3;
            this->button2->Text = L" < ";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(65, 10);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(54, 38);
            this->button3->TabIndex = 4;
            this->button3->Text = L" > ";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->label5);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->label9);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->button4);
            this->panel1->Controls->Add(this->pictureBox1);
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->button2);
            this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1500, 750);
            this->panel1->TabIndex = 5;
            this->panel1->Visible = false;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::DarkSlateGray;
            this->panel2->Controls->Add(this->button6);
            this->panel2->Controls->Add(this->button5);
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Controls->Add(this->label10);
            this->panel2->Cursor = System::Windows::Forms::Cursors::SizeAll;
            this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(2250, 1154);
            this->panel2->TabIndex = 6;
            this->panel2->Visible = false;
            // 
            // button6
            // 
            this->button6->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(65, 10);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(54, 38);
            this->button6->TabIndex = 3;
            this->button6->Text = L" > ";
            this->button6->UseVisualStyleBackColor = true;
            // 
            // button5
            // 
            this->button5->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(10, 10);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(54, 38);
            this->button5->TabIndex = 2;
            this->button5->Text = L" < ";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Location = System::Drawing::Point(1200, 10);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(50, 50);
            this->pictureBox2->TabIndex = 0;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(420, 50);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(400, 36);
            this->textBox1->TabIndex = 1;
            // 
            // button4
            // 
            this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(850, 45);
            this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(120, 45);
            this->button4->TabIndex = 2;
            this->button4->Text = L"Search";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::Search_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(1200, 10);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(50, 50);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::DarkSlateGray;
            this->ClientSize = System::Drawing::Size(1370, 749);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(21, 28, 21, 28);
            this->Name = L"MyForm";
            this->Text = L"Search Engine";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

       std::string convertStringToStdString(System::String^ managedString) {
            return msclr::interop::marshal_as<std::string>(managedString);
        }

#pragma endregion
      //  std::string convertStringToStdString(System::String^ managedString);

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->label1->Visible = false;
        this->comboBox1->Visible = false;
        this->button1->Visible = false;
        this->button2->Visible = true;
        this->button3->Visible = true;

        // Show panel
        this->panel1->Visible = true;

        // Set text in textBox1
        this->textBox1->Text = this->comboBox1->Text;
        System::String^ query = this->comboBox1->Text;
        std::string std_query = msclr::interop::marshal_as<std::string>(query);

        auto start_time = chrono::steady_clock::now(); // Start timing
       
        std::string s_input = obj->sanitize_word(std_query);
        // Check if input is a valid file path
        if (fs::exists(std_query) && fs::is_regular_file(std_query)) {
            panel2->BringToFront();
            panel2->Show();

            std::string label_path = msclr::interop::marshal_as<std::string>(this->comboBox1->Text);
            string content = obj->display_file_content(label_path);
            System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
            label10->Text = content_sys;

        }
        else {
            // Otherwise, treat input as a search query
            vector<string> words;
            istringstream iss(s_input);
            std::string word;
            while (iss >> word) {
                words.push_back(word);
            }

            bool and_query = false;
            if (std_query.find("and") != std::string::npos) {
                and_query = true;
            }

            vector<pair<std::string, int>> search_results = obj->search_words_in_files(words, and_query);
            if (search_results.size() == 0) {
                label2->Text = "Nothing related found!";
            }
            int file_count = 0;
            auto end_time = chrono::steady_clock::now(); // End timing
            auto elapsed_time = chrono::duration_cast<chrono::milliseconds>(end_time - start_time); // Calculate elapsed time
            std::string elapsed_time_str = std::to_string(elapsed_time.count());
            System::String^ elapsed_time_str_sys = msclr::interop::marshal_as<System::String^>(elapsed_time_str);
            label2->Text = "response time is " + elapsed_time_str_sys+" ms";
            for (const auto& [file_path, count] : search_results) {

                System::String^ file_path_sys = msclr::interop::marshal_as<System::String^>(file_path);
               
             
                 if (file_count == 2)
                {
                    label3->Text = file_path_sys;
                }
                else if (file_count == 3)
                {
                    label4->Text = file_path_sys;
                }
                else if (file_count == 4)
                {
                    label5->Text = file_path_sys;
                }
                else if (file_count == 5)
                {
                    label6->Text = file_path_sys;
                }
                else if (file_count == 6)
                {
                    label7->Text = file_path_sys;
                }
                else if (file_count == 7)
                {
                    label8->Text = file_path_sys;
                }
                else if (file_count == 8)
                {
                    label9->Text = file_path_sys;
                }
                file_count++;

            }
        }

    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        // Show Form1 elements
        this->label1->Visible = true;
        this->comboBox1->Visible = true;
        this->button1->Visible = true;
        this->button2->Visible = true;
        this->button3->Visible = true;

        // Hide panel
        this->panel1->Visible = false;
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        // Hide Form1 elements
        panel2->SendToBack();
        panel2->Hide();

        // Show panel
        panel1->BringToFront();
        panel1->Show();;

        // Set text in textBox1
        this->textBox1->Text = this->comboBox1->Text;
    }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Show Form1 elements
        this->label1->Visible = true;
        this->comboBox1->Visible = true;
        this->button1->Visible = true;
        this->button2->Visible = true;
        this->button3->Visible = true;

        // Hide panel
        this->panel1->Visible = false;
    }
    private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
        // Show Form1 elements
        this->label1->Visible = true;
        this->comboBox1->Visible = true;
        this->button1->Visible = true;
        this->button2->Visible = true;
        this->button3->Visible = true;

        // Hide panel
        this->panel1->Visible = false;
    }
    private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
        // Refresh panel1
        this->panel1->Refresh();


        System::String^ query = this->textBox1->Text;
        std::string std_query = msclr::interop::marshal_as<std::string>(query);
        auto start_time = chrono::steady_clock::now(); // Start timing
        // obj->browserSearch(std_query);
        std::string s_input = obj->sanitize_word(std_query);
        // Check if input is a valid file path
        if (fs::exists(std_query) && fs::is_regular_file(std_query)) {
            panel2->BringToFront();
            panel2->Show();

            std::string label_path = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
            string content = obj->display_file_content(label_path);
            System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
            label10->Text = content_sys;

        }
        else {
            // Otherwise, treat input as a search query
            vector<string> words;
            istringstream iss(s_input);
            std::string word;
            while (iss >> word) {
                words.push_back(word);
            }

            bool and_query = false;
            if (std_query.find("and") != std::string::npos) {
                and_query = true;
            }

            vector<pair<std::string, int>> search_results = obj->search_words_in_files(words, and_query);
            if (search_results.size() == 0) {
                label2->Text = "Nothing related found!";
            }
            int file_count = 0;
            auto end_time = chrono::steady_clock::now(); // End timing
            auto elapsed_time = chrono::duration_cast<chrono::milliseconds>(end_time - start_time); // Calculate elapsed time
            std::string elapsed_time_str = std::to_string(elapsed_time.count());
            System::String^ elapsed_time_str_sys = msclr::interop::marshal_as<System::String^>(elapsed_time_str);
            label2->Text = "response time is " + elapsed_time_str_sys + " ms";
            for (const auto& [file_path, count] : search_results) {

                System::String^ file_path_sys = msclr::interop::marshal_as<System::String^>(file_path);
              
                if (file_count == 2)
                {
                    label3->Text = file_path_sys;
                }
                else if (file_count == 3)
                {
                    label4->Text = file_path_sys;
                }
                else if (file_count == 4)
                {
                    label5->Text = file_path_sys;
                }
                else if (file_count == 5)
                {
                    label6->Text = file_path_sys;
                }
                else if (file_count == 6)
                {
                    label7->Text = file_path_sys;
                }
                else if (file_count == 7)
                {
                    label8->Text = file_path_sys;
                }
                else if (file_count == 8)
                {
                    label9->Text = file_path_sys;
                }
                file_count++;

            }

        }
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
        std::string label_path = msclr::interop::marshal_as<std::string>(label2->Text);
        string content = obj->display_file_content("D:\\DSA_Docs\\" + label_path);
        System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
        label10->Text = content_sys;
    }
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
        std::string label_path = msclr::interop::marshal_as<std::string>(label3->Text);
        string content = obj->display_file_content("D:\\DSA_Docs\\" + label_path);
        System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
        label10->Text = content_sys;
    }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
        std::string label_path = msclr::interop::marshal_as<std::string>(label4->Text);
        string content = obj->display_file_content("D:\\DSA_Docs\\" + label_path);
        System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
        label10->Text = content_sys;
    }
    private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
        std::string label_path = msclr::interop::marshal_as<std::string>(label5->Text);
        string content = obj->display_file_content("D:\\DSA_Docs\\" + label_path);
        System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
        label10->Text = content_sys;
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
        std::string label_path = msclr::interop::marshal_as<std::string>(label6->Text);
        string content = obj->display_file_content("D:\\DSA_Docs\\" + label_path);
        System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
        label10->Text = content_sys;
    }
    private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
        std::string label_path = msclr::interop::marshal_as<std::string>(label7->Text);
        string content = obj->display_file_content("D:\\DSA_Docs\\" + label_path);
        System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
        label10->Text = content_sys;
    }
    private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
        std::string label_path = msclr::interop::marshal_as<std::string>(label8->Text);
        string content = obj->display_file_content("D:\\DSA_Docs\\" + label_path);
        System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
        label10->Text = content_sys;
    }
    private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
        panel2->BringToFront();
        panel2->Show();
        std::string label_path = msclr::interop::marshal_as<std::string>(label9->Text);
        string content = obj->display_file_content("D:\\DSA_Docs\\" + label_path);
        System::String^ content_sys = msclr::interop::marshal_as<System::String^>(content);
        label10->Text = content_sys;
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
};
}