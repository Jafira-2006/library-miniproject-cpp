# Anna University CSE Library Engine

A high-performance, modular C++ console application built to simulate an enterprise-level library management tool. This project highlights core object-oriented principles, explicit class structures, and robust data persistence.

## 🚀 Professional Highlights
* **Multi-File Architecture**: Clean separation of interface (`Book.h`) and implementation (`book.cpp`) layers.
* **Encapsulation & Safety**: Rigid application of member access specifiers and `const` qualifiers to protect runtime entity states.
* **Data Persistence**: Native File I/O stream integration ensures student allocation logs are reliably written to local tracking registries (`library_data.txt`).

## 🛠️ Tech Stack & Concepts Used
* Language: C++17
* Standard Library Components: `std::vector`, `std::string`, `std::ofstream`
* Concepts: Modular Compilation, Guard Conditionals, Safe Stream Control

## 💻 Compilation and Execution
To compile the multi-file architecture manually from a terminal environment:
```bash
g++ -std=c++17 book.cpp library.cpp -o library_app
./library_app
```
