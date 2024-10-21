#include <iostream>
#include <string>

int main() {
    // 1. String Assignment
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;

    // 2. String Concatenation
    std::string str3 = str1 + " " + str2; // Concatenating str1, space, and str2
    std::cout << "Concatenated String: " << str3 << std::endl;

    // 3. Substring Reference
    std::string substr = str3.substr(6, 5); // Extract "World" from str3
    std::cout << "Substring (6, 5): " << substr << std::endl;

    // 4. String Comparison
    if (str1 == str2) {
        std::cout << "String 1 and String 2 are equal." << std::endl;
    } else {
        std::cout << "String 1 and String 2 are not equal." << std::endl;
    }

    // 5. Pattern Matching (Finding a substring)
    std::size_t found = str3.find("World");
    if (found != std::string::npos) {
        std::cout << "'World' found at position: " << found << std::endl;
    } else {
        std::cout << "'World' not found." << std::endl;
    }

    return 0;
}
