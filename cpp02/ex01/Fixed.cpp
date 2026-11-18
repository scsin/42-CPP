#include <iostream>
#include "Fixed.hpp"

int Fixed::getRawBits( void ) const {
    return (int_bits);
}

void Fixed::setRawBits( int const raw ) {
    int_bits = raw;
}

float Fixed::toFloat( void ) const {
    int denominator = 1 << frac_bits;
    if (denominator == 0)
        return (0.0);
    return (static_cast<float>(this->getRawBits()) / denominator);
}

int Fixed::toInt( void ) const {
    return (this->getRawBits() >> frac_bits);
}

Fixed::Fixed ( void ) : int_bits(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int value ) {
    std::cout << "Int constructor called\n";
    int_bits = value << frac_bits;
}

Fixed::Fixed( const float value ) {
    std::cout << "Float constructor called\n";
    // rounding(value) / truncation with static_cast
    int_bits = static_cast<int>(roundf(value * (1 << frac_bits)));
}

Fixed::Fixed( const Fixed& fx ) { // copy constructor
    std::cout << "Copy Constructor called\n";
    int_bits = fx.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& fx ) { // copy assignment
    std::cout << "Copy assignment called\n";
    if (this != &fx)
        this->int_bits = fx.getRawBits();
    return *this;
}

// operator overloading
std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    return (out << value.toFloat());
}

Fixed::~Fixed ( void ) {
    std::cout << "Destructor called\n";
}
