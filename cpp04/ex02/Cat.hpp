#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal {
	private:
		Brain* brain;

    public:
        void makeSound();

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
