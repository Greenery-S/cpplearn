#include <iostream>

// A function named “readNumber” should be used to get (and return) a single integer from the user.
// A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
// A main() function should be used to glue the above functions together.

int readNumber()
{
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The answer is: " << x << '\n';
}

int main()
{
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y);
    return 0;
}
