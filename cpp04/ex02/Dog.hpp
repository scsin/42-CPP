#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal {
	private:
		Brain* brain;

    public:
        void makeSound();

        Dog( void );
        Dog( std::string type );
        Dog( const Dog& dg ); // copy constructor
        Dog& operator=( const Dog& dg ); // copy assignment
        ~Dog();
};

#endif
