#include <iostream>

void doSomething(unsigned int);

int main()
{
    unsigned short us;
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;

    unsigned short x{65535}; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';
    x = 65536; // 65536 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';
    x = 65537; // 65537 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 0; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';
    x = -1; // -1 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';
    x = -2; // -2 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    // Favor signed numbers over unsigned numbers for holding quantities (even quantities that should be non-negative) and mathematical operations. Avoid mixing signed and unsigned numbers.

    unsigned int a{2}, b{5};
    std::cout << a - b << '\n'; // 4294967293

    unsigned int u{3};
    int s{2};
    std::cout << s - u << '\n'; // 4294967295

    s = -1;
    u = 1;
    if (s < u) // -1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
        std::cout << "-1 is less than 1\n";
    else
        std::cout << "1 is less than -1\n"; // this statement executes

    doSomething(-1);

    return 0;
}

void doSomething(unsigned int x)
{
    // Run some code x times

    std::cout << "x is " << x << '\n';
}
