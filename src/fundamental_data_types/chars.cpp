#include <iostream>

int main()
{
    char ch1{'a'};    // (preferred)
    std::cout << ch1; // cout prints character 'a'

    char ch2{98};     // code point for 'b' (not preferred)
    std::cout << ch2; // cout prints a character ('b')

    std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)
    char ch{};
    std::cin >> ch; // ch = 'a', "bcd" is left queued.
    std::cout << "You entered: " << ch << '\n';
    // Note: The following cin doesn't ask the user for input, it grabs queued input!
    std::cin >> ch; // ch = 'b', "cd" is left queued.
    std::cout << "You entered: " << ch << '\n';

    std::cout << "\"This is quoted text\"\n";
    std::cout << "This string contains a single backslash \\\n";
    std::cout << "6F in hex is char '\x6F'\n";

    // Avoid multicharacter literals (e.g. '56').
    int x{5};
    std::cout << "The value of x is " << x << '!\n'; // added exclamation point

    // wchar_t should be avoided in almost all cases (except when interfacing with the Windows API). 
    // Its size is implementation defined, and is not reliable. It has largely been deprecated.

    // char16_t and char32_t were added to C++11 to provide explicit support for 16-bit and 32-bit Unicode characters. 
    // These char types have the same size as std::uint_least16_t and std::uint_least32_t respectively (but are distinct types). 
    // char8_t was added in C++20 to provide support for 8-bit Unicode (UTF-8). 
    // It is a distinct type that uses the same representation as unsigned char.

    // You won’t need to use char8_t, char16_t, or char32_t unless you’re planning on making your program Unicode compatible. 
    // Unicode and localization are generally outside the scope of these tutorials, so we won’t cover it further.
}
