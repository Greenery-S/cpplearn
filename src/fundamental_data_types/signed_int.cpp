#include <iostream>
int main()
{
    // Prefer the shorthand types that do not use the int suffix or signed prefix.
    short s; // prefer "short" instead of "short int"
    int i;
    long l;       // prefer "long" instead of "long int"
    long long ll; // prefer "long long" instead of "long long int"
    /*
    signed short ss;
    signed int si;
    signed long sl;
    signed long long sll;
    */

    // assume 4 byte integers
    int x { 2'147'483'647 }; // the maximum value of a 4-byte signed integer
    std::cout << x << '\n';

    x = x + 1; // integer overflow, undefined behavior
    std::cout << x << '\n';

    std::cout << -8 / 5 << '\n';

    return 0;
}
