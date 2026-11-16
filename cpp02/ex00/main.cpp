#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b( a ); // copy constructor
    Fixed c;

    c = b; // copy assignment

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    /*a.setRawBits(9);
    b.setRawBits(15);
    c.setRawBits(20);

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;*/

    return 0;
}
