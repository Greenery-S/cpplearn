#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

int main(){
    int x{getValueFromUser()};
    int y{getValueFromUser()};
    std::cout << x << " + " << y << " = " << x + y << '\n';
}
