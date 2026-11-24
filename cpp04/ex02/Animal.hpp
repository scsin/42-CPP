#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class A_Animal {
    protected:
        std::string type;

    public:
        virtual void makeSound() = 0;
        std::string getType( void ) const;
        A_Animal( void );
        A_Animal( std::string type );
        A_Animal( const A_Animal& an ); // copy constructor
        A_Animal& operator=( const A_Animal& an ); // copy assignment
        virtual ~A_Animal();
};

#include <iostream>
class WrongAnimal {
    public:
        void makeSound() const { std::cout << "WrongAnimal sound\n"; };
		~WrongAnimal();
};

#endif
