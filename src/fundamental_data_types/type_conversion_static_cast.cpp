#include <iostream>

void print(int x) // print takes a double parameter
{
    std::cout << x << '\n';
}

int main()
{
    print(5.5); // what happens when we pass an int value?

    // static_cast<new_type>(expression)
    print(static_cast<int>(5.5)); // explicitly convert double value 5.5 to an int

    char ch{97};                                                      // 97 is ASCII code for 'a'
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n'; // print value of variable ch as an int

    // std::int8_t and std::uint8_t likely behave like chars instead of integers
    std::int8_t myInt{65};                        // initialize myInt with value 65
    std::cout << myInt << '\n';                   // you're probably expecting this to print 65, but it may print 'A' instead in some systems
    std::cout << static_cast<int>(myInt) << '\n'; // will always print 65

    std::cout << "Enter a number between 0 and 127: ";
    std::cin >> myInt; // 12
    std::cout << "You entered: " << static_cast<int>(myInt) << '\n'; // 49, '1'

    /*
    A
    65
    Enter a number between 0 and 127: 12
    You entered: 49
    */

    return 0;
}
