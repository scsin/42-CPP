#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

void Cat::makeSound() {
    std::cout << "Miauu" << "\n";
}

Cat::Cat( void ) : A_Animal() {
    type = "Cat";
	brain = new Brain();
    std::cout << type << " default constructor called" << "\n";
}

Cat::Cat( std::string type ) : A_Animal(type) {
	brain = new Brain();
    std::cout << "Cat constructor called" << "\n";
}

Cat::Cat( const Cat& ct ) : A_Animal(ct) { // copy constructor
	brain = new Brain();
    std::cout << "Cat copy constructor called" << "\n";
}

Cat& Cat::operator=( const Cat& ct ) { // copy assignment
	if (this != &ct)
	{
		this->type = ct.type;
		Brain _nb = Brain(*ct.brain);
		this->brain = &_nb;
		std::cout << "Cat copy assignment called" << "\n";
	}
    return (*this);
}

Cat::~Cat() {
	if (brain)
		delete brain;
    std::cout << "Cat destructor called" << "\n";
}
