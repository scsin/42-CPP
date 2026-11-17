#include <iostream>
#include "Fixed.hpp"

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called\n";
    return (int_bits);
}

void Fixed::setRawBits( int const raw ) {
    int_bits = raw;
    std::cout << "setRawBits member function called\n";
}

Fixed::Fixed ( void ) : int_bits(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed& fx ) { // copy constructor
    std::cout << "Copy Constructor called\n";
    int_bits = fx.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& fx ) {// copy assignment
    std::cout << "Copy assignment called\n";
    if (this != &fx)
        int_bits = fx.getRawBits();
    return *this;
}

Fixed::~Fixed ( void ) {
    std::cout << "Destructor called\n";
}
