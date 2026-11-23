#include <iostream>
#include "Cat.hpp"

void Cat::makeSound() const {
    std::cout << "Miauu" << "\n";
}

Cat::Cat( void ) : Animal() {
    type = "Cat";
    std::cout << type << " default constructor called" << "\n";
}

Cat::Cat( std::string type ) : Animal(type) {
    std::cout << "Cat constructor called" << "\n";
}

Cat::Cat( const Cat& ct ) : Animal(ct) {
    std::cout << "Cat copy constructor called" << "\n";
}

Cat& Cat::operator=( const Cat& ct ) {
	if (this != &ct)
		std::cout << "Cat copy assignment called" << "\n";
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << "\n";
}
