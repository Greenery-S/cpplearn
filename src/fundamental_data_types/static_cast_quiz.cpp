#include <iostream>
int getInt(int x){
    return x;
}
int main(){
    // Enter a single character: a
    // You entered 'a', which has ASCII code 97.
    char ch{};
    std::cout << "Enter a single character: ";
    std::cin>>ch;
    std::cout << "You entered '" << ch << "', which has ASCII code " << static_cast<int>(ch) << ".\n";

    // implicit conversion from int to char
    int i{};
    std::cout << "Enter a single character: ";
    std::cin>>ch;
    i = ch;
    std::cout << "You entered '" << ch << "', which has ASCII code " << i << ".\n";

    // implicit conversion from int to char
    std::cout << "Enter a single character: ";
    std::cin>>ch;
    std::cout << "You entered '" << ch << "', which has ASCII code " << getInt(ch) << ".\n";
}
