# Decision Table Builder

A C++ desktop app for generating decision tables using user-defined conditions and actions. Built for CIS 375: Software Engineering I at the University of Michigan-Dearborn.

## 📋 Features
- Simple command-line interface (CLI)
- Users enter conditions and actions
- Automatically generates all rule combinations (2^n)
- Outputs a clean decision table to the terminal

## 🛠 Technologies
- Language: C++ (C++11)
- Platform: Desktop (CLI-based)
- Compatible with g++, clang++, or Visual Studio

## 🚀 How to Run

### Compile (Linux/macOS/WSL)
```bash
g++ -std=c++11 -o decision_table "Final Source Code.cpp"
./decision_table
