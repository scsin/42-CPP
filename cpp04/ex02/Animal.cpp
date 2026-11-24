#include <iostream>
#include "Animal.hpp"

std::string A_Animal::getType( void ) const {
    return (type);
}

A_Animal::A_Animal( void ) {
	type = "A_Animal";
    std::cout << "A_Animal default constructor called" << "\n";
}

A_Animal::A_Animal ( std::string type ) : type(type) {
    std::cout << "A_Animal constructor called" << "\n";
}

A_Animal::A_Animal ( const A_Animal& an ) { // copy constructor
    this->type = an.type;
    std::cout << "A_Animal copy constructor called" << "\n";
}

A_Animal& A_Animal::operator=( const A_Animal& an ) { // copy assignment
    if (this != &an) {
		this->type = an.type;
		std::cout << "A_Animal copy assignment called" << "\n";
	}
    return (*this);
}

A_Animal::~A_Animal() {
    std::cout << "A_Animal destructor called" << "\n";
}
