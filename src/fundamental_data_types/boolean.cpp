#include <iostream>

int main(){
    std::cout << true << '\n'; // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0

    bool b {false};
    std::cout << b << '\n'; // b is false, which evaluates to 0
    std::cout << !b << '\n'; // !b is true, which evaluates to 1

    std::cout << std::boolalpha; // print bools as true or false
    std::cout << b << '\n'; // b is false, which evaluates to 0
    std::cout << !b << '\n'; // !b is true, which evaluates to 1
    std::cout << std::noboolalpha; // turn off boolalpha

    bool bFalse { 0 }; // okay: initialized to false
	bool bTrue  { 1 }; // okay: initialized to true
	// bool bNo    { 2 }; // error: narrowing conversions disallowed
    bool b1 = 4 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b1 << '\n';
	bool b2 = 0 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b2 << '\n';

	std::cout << "Enter a boolean value: ";
	std::cin >> b; // accepts 0 or 1
	std::cout << "You entered: " << b << '\n';
    
    std::cout << std::boolalpha; // print bools as true or false
	std::cout << "Enter a boolean value: ";
	std::cin >> b; // accepts true or false
	std::cout << "You entered: " << b << '\n';
    std::cout << std::noboolalpha; // turn off boolalpha

    return 0;
}
