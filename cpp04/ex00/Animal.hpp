#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
    protected:
        std::string type;

    public:
        virtual void makeSound() const;
        std::string getType( void ) const;
        Animal( void );
        Animal( std::string type );
        Animal( const Animal& an ); // copy constructor
        Animal& operator=( const Animal& an ); // copy assignment
        virtual ~Animal();
};

#include <iostream>
class WrongAnimal {
    public:
        void makeSound() const { std::cout << "WrongAnimal sound\n"; };
        ~WrongAnimal();
};

#endif
