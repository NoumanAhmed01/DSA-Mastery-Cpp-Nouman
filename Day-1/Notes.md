// ✅ C++ Basics
// Created by Bjarne Stroustrup at Bell Labs (1980s).

// ✅ Keywords & Identifiers
// - Keywords: Reserved words with special meanings (if, else, class, break, continue).
// - Identifiers: User-defined names for variables, functions, classes.
// _ Cannot be a keyword.
// _ Must start with a letter or underscore (_).
// \* Cannot contain spaces or special characters except _.
// \* Case-sensitive (Var ≠ var).

// ✅ Data Types
// Built-in: int, float, char, bool, double, void
// Derived: array, pointer, reference
// User-defined: struct, union, class, enum

// ✅ Operators
// Arithmetic: +, -, _, /, %
// Relational: <, >, <=, >=, ==, !=
// Assignment: =, +=, -=, _=, /=, %=
// Increment/Decrement: ++, --
// Logical: &&, ||, !
// Bitwise: &, |, ^, ~, <<, >>
// Ternary: condition ? value1 : value2
// Comma: ,

// ✅ Important Concepts Before Coding
// - Punctuators & Separators: {}, [], ;, , ( )
// - Literals (Fixed values like 10, 'A') vs Constants (Named fixed values using `const`).
// - Comments: // (Single-line), /_ Multi-line _/
// - Basic I/O: cin (input), cout (output)

#include <iostream> → This is a preprocessor directive that includes the iostream library, which allows input (cin) and output (cout).
2️⃣ using namespace std; → This tells the compiler to use the standard namespace (std), so we can write cout instead of std::cout.
3️⃣ int main() { } → The main function is the entry point of every C++ program. All code runs inside this function.
4️⃣ cout << "Hello, World!"; → This prints output to the screen.
5️⃣ return 0; → Indicates that the program executed successfully

// ✅ Macros in C++
#define PI 3.14159 // Preprocessor directive, no memory allocation

// ✅ Type Casting in C++

// 🔹 Implicit Type Casting (Done by Compiler)
int num = 5;
float result = num / 2.0; // int automatically converts to float

// 🔹 Explicit Type Casting (Forced by Programmer)
float num2 = 5.75;
int res = (int)num2; // Converts float to int manually
