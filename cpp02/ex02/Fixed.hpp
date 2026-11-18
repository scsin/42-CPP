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

        /* comparison */
        bool operator> ( Fixed number );
        bool operator< ( Fixed number );
        bool operator>=( Fixed number );
        bool operator<=( Fixed number );
        bool operator==( Fixed number );
        bool operator!=( Fixed number );

        /* arithmetic */
        Fixed operator+( Fixed number );
        Fixed operator-( Fixed number );
        Fixed operator*( Fixed number );
        Fixed operator/( Fixed number );

        /* increment / decrement */
        Fixed& operator++();
        Fixed operator++( int );
        Fixed& operator--();
        Fixed operator--( int );

        /* min / max */
        static Fixed& min( Fixed& n1, Fixed& n2 );
        static const Fixed& min( const Fixed& n1, const Fixed& n2 );
        static Fixed& max( Fixed& n1, Fixed& n2 );
        static const Fixed& max( const Fixed& n1, const Fixed& n2 );

        Fixed( void );
        Fixed( const int value );
        Fixed( const float value );
        Fixed( const Fixed& fx ); // copy constructor
        Fixed& operator=( const Fixed& fx ); // copy assignment
        ~Fixed( void );
};

std::ostream& operator<<(std::ostream& out, const Fixed& value); // operator overloading

#endif
