#ifndef FIXED_H
#define FIXED_H

class Fixed {
    private:
        int int_bits;
        static const int frac_bits = 8;

    public:
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed( void );
        Fixed( const Fixed& fx ); // copy constructor
        Fixed& operator=( const Fixed& fx ); // copy assignment
        ~Fixed( void );
};

#endif
