#include <iostream>
#include <cmath>
#include "Fixed.hpp"

/* default member functions */
int Fixed::getRawBits( void ) const {
    return (int_bits);
}

void Fixed::setRawBits( int const raw ) {
    int_bits = raw;
}

float Fixed::toFloat( void ) const {
    int denominator = 1 << frac_bits;
    return (static_cast<float>(this->getRawBits()) / denominator);
}

int Fixed::toInt( void ) const {
    return (this->getRawBits() >> frac_bits);
}

/* comparison */
bool Fixed::operator> ( Fixed rhs ) {
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator< ( Fixed rhs ) {
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=( Fixed rhs ) {
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=( Fixed rhs ) {
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==( Fixed rhs ) {
    return (this->getRawBits() == rhs.getRawBits()); // is it ok to compare it like this?
}

bool Fixed::operator!=( Fixed rhs ) {
    return (this->getRawBits() != rhs.getRawBits()); // is it ok to compare it like this?
}

/* arithmetic */
Fixed Fixed::operator+( Fixed number ) {
    Fixed result = this->getRawBits() + number.getRawBits();
    return (result);
}

Fixed Fixed::operator-( Fixed number ) {
    Fixed result = this->getRawBits() - number.getRawBits();
    return (result);
}

// nao entendo pq nessa função tem q ser this->toFloat() e number.toFloat()
// antes era getRawBits p/ ambos
Fixed Fixed::operator*( Fixed number ) {
    Fixed result(this->toFloat() * number.toFloat());
    return (result);
}

Fixed Fixed::operator/( Fixed number ) {
    Fixed result = this->getRawBits() / number.getRawBits();
    return (result);
}

/* increment / decrement */
// prefix
Fixed& Fixed::operator++() {
    this->int_bits++;
    return (*this);
}

// postfix
Fixed Fixed::operator++( int ) {
    Fixed old = this->toFloat();
    operator++();
    return (old);
}

Fixed& Fixed::operator--() {
    return (*this);
}

Fixed Fixed::operator--( int ) {
    int old = this->int_bits;
    operator++();
    return (old);
}

/* min / max */
Fixed& Fixed::min( Fixed& lhs, Fixed& rhs ) {
    if (lhs.getRawBits() < rhs.getRawBits())
        return (lhs);
    return (rhs);
}

const Fixed& Fixed::min( const Fixed& lhs, const Fixed& rhs ) {
    if (lhs.getRawBits() < rhs.getRawBits())
        return (lhs);
    return (rhs);
}

Fixed& Fixed::max( Fixed& lhs, Fixed& rhs ) {
    if (lhs.getRawBits() > rhs.getRawBits())
        return (lhs);
    return (rhs);
}

const Fixed& Fixed::max( const Fixed& lhs, const Fixed& rhs ) {
    if (lhs.getRawBits() > rhs.getRawBits())
        return (lhs);
    return (rhs);
}

/* constructors */
Fixed::Fixed ( void ) : int_bits(0) {
    // std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int value ) {
    // std::cout << "Int constructor called\n";
    int_bits = value << frac_bits;
}

Fixed::Fixed( const float value ) {
    // std::cout << "Float constructor called\n";
    // rounding(value) / truncation with static_cast
    int_bits = static_cast<int>(roundf(value * (1 << frac_bits)));
}

Fixed::Fixed( const Fixed& fx ) { // copy constructor
    // std::cout << "Copy Constructor called\n";
    int_bits = fx.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& fx ) { // copy assignment
    // std::cout << "Copy assignment called\n";
    if (this != &fx)
        this->int_bits = fx.getRawBits();
    return *this;
}

/* operator overloading */
std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.toFloat();
    return out;
}

/* destructor */
Fixed::~Fixed ( void ) {
    // std::cout << "Destructor called\n";
}
