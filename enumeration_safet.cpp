#include <iostream>

enum Color { RED, GREEN, BLUE };
enum Fruit { APPLE, ORANGE, BANANA };

int main() {
    Color c = RED;
    Fruit f = APPLE;

    // 1. Assign an integer value to an enum variable (with cast)
    c = static_cast<Color>(1); // OK

    // 2. Compare two different enum types (Color and Fruit)
    if (c == f) { // WARNING but compiles
        std::cout << "Compared Color and Fruit enums.\n";
    }

    // 3. Assign an integer directly to an enum (without cast)
    // c = 2; // ERROR: Cannot assign int directly

    // 4. Arithmetic operation on an enum variable
    Color nextColor = static_cast<Color>(c + 1); // OK: Arithmetic
    std::cout << "Next Color: " << nextColor << std::endl;

    // 5. Enum out of range
    c = static_cast<Color>(10); // OK: Allowed but incorrect

    // 6. Output enum value as integer
    std::cout << "Enum as integer: " << c << std::endl; // Outputs integer

    // 7. Enum comparison with integer
    if (c == 10) { // OK: Enum compared to integer
        std::cout << "Enum is equal to 10.\n";
    }

    // 8. Enum increment
    c = static_cast<Color>(c + 1); // OK: Increment

    // 9. Enum used in a switch statement
    switch (c) {
        case RED:
            std::cout << "Red\n";
            break;
        case GREEN:
            std::cout << "Green\n";
            break;
        case BLUE:
            std::cout << "Blue\n";
            break;
        default:
            std::cout << "Invalid Color\n";
            break;
    }

    // 10. Bitwise operations on enums
    // c = c | BLUE; // ERROR: C++ doesn't allow bitwise operations on non-bitmask enums

    // 11. Casting enum to another enum type (Color to Fruit)
    // f = static_cast<Fruit>(c); // ERROR: Cannot cast between enum types

    return 0;
}
