#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
    private:
        int int_bits;
        static const int frac_bits = 8;

    public:
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed( void );
        Fixed( const int value );
        Fixed( const float value );
        Fixed( const Fixed& fx ); // copy constructor
        Fixed& operator=( const Fixed& fx ); // copy assignment
        ~Fixed( void );
};

std::ostream& operator<<(std::ostream& out, const Fixed& value); // operator overloading

#endif
