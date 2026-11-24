#include <iostream>
#include "Cat.hpp"

void Cat::makeSound() const {
    std::cout << "Miauu" << "\n";
}

Cat::Cat( void ) : Animal() {
    type = "Cat";
	brain = new Brain();
    std::cout << type << " default constructor called" << "\n";
}

Cat::Cat( std::string type ) : Animal(type) {
	brain = new Brain();
    std::cout << "Cat constructor called" << "\n";
}

Cat::Cat( const Cat& ct ) : Animal(ct) {
	brain = new Brain();
    std::cout << "Cat copy constructor called" << "\n";
}

Cat& Cat::operator=( const Cat& ct ) {
	if (this != &ct)
	{
		this->brain = ct.brain;
		std::cout << "Cat copy assignment called" << "\n";
	}
    return (*this);
}

Cat::~Cat() {
	if (brain)
		delete brain;
    std::cout << "Cat destructor called" << "\n";
}
