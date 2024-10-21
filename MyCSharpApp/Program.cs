using System;

enum Color { RED, GREEN, BLUE }
enum Fruit { APPLE, ORANGE, BANANA }

class Program
{
    static void Main()
    {
        Color c = Color.RED;
        Fruit f = Fruit.APPLE;

        // 1. Assign an integer value to an enum variable (with cast)
        c = (Color)1; // OK: Explicit cast required

        // 2. Compare two different enum types (Color and Fruit)
        // if (c == f) // ERROR: Cannot compare different enum types

        // 3. Assign an integer directly to an enum (without cast)
        // c = 2; // ERROR: Cannot assign int directly to enum

        // 4. Arithmetic operation on an enum variable
        Color nextColor = (Color)((int)c + 1); // OK
        Console.WriteLine("Next Color: " + nextColor);

        // 5. Enum out of range
        c = (Color)10; // OK: Allowed but incorrect

        // 6. Output enum value as integer
        Console.WriteLine("Enum as integer: " + (int)c); // OK

        // 7. Enum comparison with integer
        if ((int)c == 10) // OK
        {
            Console.WriteLine("Enum is equal to 10.");
        }

        // 8. Enum increment (with cast)
        c = (Color)((int)c + 1); // OK

        // 9. Enum used in a switch statement
        switch (c)
        {
            case Color.RED:
                Console.WriteLine("Red");
                break;
            case Color.GREEN:
                Console.WriteLine("Green");
                break;
            case Color.BLUE:
                Console.WriteLine("Blue");
                break;
            default:
                Console.WriteLine("Invalid Color");
                break;
        }
    }
}
