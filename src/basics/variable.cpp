#include <iostream>

int main()
{
    // Variable declaration and initialization
    int a;       // default initialization
    int b = 5;   // copy initialization
    int c(6);    // direct initialization
    int d{7};    // direct list initialization / uniform initialization [recommended]
    int e = {8}; // copy list initialization
    int f{};     // value initialization [recommended]
    std::cout << "\nVariable declaration and initialization\n";
    std::cout << "a:" << a << " ";
    std::cout << "b:" << b << " ";
    std::cout << "c:" << c << " ";
    std::cout << "d:" << d << " ";
    std::cout << "e:" << e << " ";
    std::cout << "f:" << f << "\n";

    // multiple variable declaration and initialization
    int a1, b1;
    int c1 = 5, d1 = 6;
    int e1(7), f1(8);
    int g1{9}, h1{10};
    int i1 = {11}, j1 = {12};
    int k1{}, l1{};
    std::cout << "\nMultiple variable declaration and initialization\n";
    std::cout << "a:" << a1 << "\t"
              << "b:" << b1 << "\n";
    std::cout << "c:" << c1 << "\t"
              << "d:" << d1 << "\n";
    std::cout << "e:" << e1 << "\t"
              << "f:" << f1 << "\n";
    std::cout << "g:" << g1 << "\t"
              << "h:" << h1 << "\n";
    std::cout << "i:" << i1 << "\t"
              << "j:" << j1 << "\n";
    std::cout << "k:" << k1 << "\t"
              << "l:" << l1 << "\n";

    int a2, b2 = 5;
    int c2, d2(6);
    int e2, f2{8};
    std::cout << "\nOnly the second one will be initialized\n";
    std::cout << "a:" << a2 << "\t"
              << "b:" << b2 << "\n";
    std::cout << "c:" << c2 << "\t"
              << "d:" << d2 << "\n";
    std::cout << "e:" << e2 << "\t"
              << "f:" << f2 << "\n";

    int x{5};                            // variable defined but not used -- compiler will give warning
    [[maybe_unused]] double pi{3.14159}; // variable defined but not used -- no warning
    return 0;
}
