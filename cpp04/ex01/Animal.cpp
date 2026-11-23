#include <iostream>
#include "Animal.hpp"

void Animal::makeSound() const {
    std::cout << "Animal sound" << "\n";
}

std::string Animal::getType( void ) const {
    return (type);
}

Animal::Animal( void ) {
	type = "Animal";
    std::cout << "Animal default constructor called" << "\n";
}

Animal::Animal ( std::string type ) : type(type) {
    std::cout << "Animal constructor called" << "\n";
}

Animal::Animal ( const Animal& an ) { // copy constructor
    this->type = an.type;
    std::cout << "Animal copy constructor called" << "\n";
}

Animal& Animal::operator=( const Animal& an ) { // copy assignment
    if (this != &an) {
		this->type = an.type;
		std::cout << "Animal copy assignment called" << "\n";
	}
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << "\n";
}
