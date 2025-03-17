# clsInput Library 📥

The clsInput library is a C++ template-based utility that provides flexible and secure user input handling. It supports number, string, character, and boolean input while ensuring input validation.

## Features ✨
- *Number Input*: Reads integers and floating-point numbers with validation
- *String Input*: Reads text input safely
- *Character Input*: Reads single characters with uppercase conversion support
- *Boolean Input*: Reads true/false values with validation
- *Range Checking*: Ensures that a number falls within a specified range

## Installation 📥
1. Include the following header in your project:
```cpp
#include "clsInput.h"

Quick Start 🚀

// Read an integer
int age = clsInput<int>::ReadNumber("Enter your age: ");
cout << "Your age is: " << age << endl;

// Read a floating-point number within a range
double price = clsInput<double>::ReadNumber("Enter the price: ", 10.0, 100.0);
cout << "The price is: " << price << endl;

// Read a string
string name = clsInput<string>::ReadString("Enter your name: ");
cout << "Your name is: " << name << endl;

Main Functions 🔑

Advanced Examples 📚

1. Checking if a number is within a range

int score = clsInput<int>::ReadNumber("Enter your score: ", 0, 100);
if (clsInput<int>::IsNumberBetween(score, 50, 100)) {
    cout << "You passed!" << endl;
} else {
    cout << "You need to improve your score." << endl;
}

2. Boolean Input Handling

bool isConfirmed = clsInput<bool>::YorN("Do you want to continue? (Y/N): ") == 'Y';
if (isConfirmed) {
    cout << "Proceeding..." << endl;
} else {
    cout << "Operation canceled!" << endl;
}

3. Safe String Input

string fullName = clsInput<string>::ReadString("Enter your full name: ");
cout << "Hello, " << fullName << "!" << endl;

Technical Notes 💡

1. Template-Based: The library uses templates, making it flexible for different data types.


2. Input Validation: Prevents errors like entering text when a number is required.


3. Integration with clsString: Can be used alongside clsString for additional text processing like case conversion.



Contribution 🤝

Contributions are welcome! Follow these guidelines:

1. Improve input validation for more edge cases.


2. Add support for additional data types if necessary.


3. Enhance the user experience with clearer messages.



License 📄

This project is licensed under the MIT License.


---

Developed with ❤️ by Mohamed Essam | GitHub

This description provides a structured and professional overview of the clsInput library in English, covering all features, functions, examples, and contributions. Let me know if you need any modifications!
