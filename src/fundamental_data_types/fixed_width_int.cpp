#include <cstdint> // for fixed-width integers
#include <cstddef> // for std::size_t
#include <iostream>

int main(){
    std::int16_t i{5};
    std::int32_t j{10};
    std::int64_t k{20};
    std::cout <<'\n';

    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

    /*
    Best practice

    Prefer int when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2-byte signed integer) and the variable is short-lived (e.g. destroyed at the end of the function). For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16 or 32 bits (the numbers will fit either way). This will cover the vast majority of the cases you’re likely to run across.
    Prefer std::int#_t when storing a quantity that needs a guaranteed range.
    Prefer std::uint#_t when doing bit manipulation or where well-defined wrap-around behavior is required.
    
    Avoid the following when possible:
        short and long integers -- use a fixed-width type instead.
        Unsigned types for holding quantities.
        The 8-bit fixed-width integer types.
        The fast and least fixed-width types.
        Any compiler-specific fixed-width integers -- for example, Visual Studio defines __int8, __int16, etc…
    */

   std::cout << sizeof(std::size_t) << '\n';
   /*
    If you use std::size_t explicitly in your code, #include one of the headers that defines std::size_t (we recommend <cstddef>).
    Using sizeof does not require a header (even though it return a value whose type is std::size_t).
   */
}
