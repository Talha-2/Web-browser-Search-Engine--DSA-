
# 📊 Web Browser Search Engine

This project implements a lightweight, educational **Web Browser and Search Engine** tailored to a local collection of web pages. It combines essential features of both tools:

* A **minimal browser** capable of displaying pages, supporting navigation actions (like Home, Back, Forward), and enabling clickable hyperlinks.
* A **search engine** that indexes pages using a **Trie (prefix tree)** structure for efficient word storage and query processing.
* A **connectivity graph** of hyperlinks, allowing users to explore link paths, view reachable pages, and compute shortest paths between URLs.

By simulating real-world browser and search engine functionality on a smaller scale, the project underscores how data structures (especially Trie and graph representations) underpin efficient information retrieval and web navigation.

---

## 📂 Directory Structure

```

Talha-2/
│── MyForm.cpp                 # Main implementation file for the GUI
│── MyForm.h                   # Header file for the form class
│── MyForm.resx                # Resource file containing form design
│── TheCode.h                  # Contains core project logic and functions
│── final\_dsa\_project.vcxproj  # Visual Studio project file
│── final\_dsa\_project.vcxproj.filters  # Project filters (for source/header separation)
│── final\_dsa\_project.vcxproj.user     # User-specific project settings
│── README.md                  # Project documentation

````

---

## ⚙️ Setup Instructions

### 1️⃣ Prerequisites
- **Windows OS**
- **Visual Studio 2019/2022** (with C++ Desktop Development workload installed)
- .NET Framework support (installed by default with Visual Studio)

### 2️⃣ Steps to Build & Run
1. Clone this repository:
   
   git clone https://github.com/<your-username>/Talha-2.git
   cd Talha-2


2. Open `final_dsa_project.vcxproj` in **Visual Studio**.
3. Make sure the configuration is set to:

   * **Debug / Release** (based on preference)
   * **x86** platform (WinForms supports 32-bit builds more smoothly)
4. Press **F5** or click **Start Debugging** to build and run.

---

## 🖥️ Usage

* The GUI will launch upon running the project.
* Interact with the provided buttons and fields to explore the implemented **data structures and algorithms**.
* The main project logic is implemented in **TheCode.h**, which integrates with the GUI through `MyForm.cpp`.

---

## 🚀 Features

* Interactive **Windows Form GUI** for visualizing algorithms.
* Modular structure (`TheCode.h`) for separating UI and logic.
* Built using **C++/CLI with .NET WinForms** for educational purposes.

---

## 🔮 Future Improvements

* Add more algorithm visualizations.
* Improve UI design with modern controls.
* Extend support for 64-bit builds.

---

