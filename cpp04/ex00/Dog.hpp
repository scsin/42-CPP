#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal {
    public:
        void makeSound() const;

        Dog( void );
        Dog( std::string type );
        Dog( const Dog& dg ); // copy constructor
        Dog& operator=( const Dog& dg ); // copy assignment
        ~Dog();
};

#endif
