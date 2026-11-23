#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal {
    public:
        void makeSound() const;

        Cat( void );
        Cat( std::string type );
        Cat( const Cat& ct ); // copy constructor
        Cat& operator=( const Cat& ct ); // copy assignment
        ~Cat();
};

class WrongCat : public WrongAnimal {
    public:
        void makeSound() { std::cout << "WrongMiauu"; };
};

#endif
