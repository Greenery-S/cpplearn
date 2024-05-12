#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl; // endl will flush the buffer
    std::cout << "Hello, World!" << '\n';      // '\n' will not flush the buffer, prefer this

    std::cout << "Enter a number: "; // ask user for a number
    int x1{};                         // define variable x to hold user input (and value-initialize it)
    std::cin >> x1;                   // get number from keyboard and store it in variable x
    std::cout << "You entered " << x1 << '\n';

    std::cout << "Enter two numbers separated by a space: ";
    int x2{}, y2{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x2 >> y2; // get two numbers and store in variable x and y respectively
    std::cout << "You entered " << x2 << " and " << y2 << '\n';
    return 0;
}
