#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

void Dog::makeSound() {
    std::cout << "Woof!" << "\n";
}

Dog::Dog( void ) : A_Animal() {
    type = "Dog";
	brain = new Brain();
   std::cout << type << " default constructor called" << "\n";
}

Dog::Dog( std::string type ) : A_Animal(type) {
	brain = new Brain();
    std::cout << "Dog constructor called" << "\n";
}

Dog::Dog( const Dog& dg ) : A_Animal(dg) { // copy constructor
	brain = new Brain();
    std::cout << "Dog copy constructor called" << "\n";
}

Dog& Dog::operator=( const Dog& dg ) { // copy assignment
	if (this != &dg)
	{
		this->type = dg.type;
		Brain _nb = Brain(*dg.brain);
		this->brain = &_nb;
	    std::cout << "Dog copy assignment called" << "\n";
	}
    return (*this);
}

Dog::~Dog() {
	if (brain)
		delete brain;
    std::cout << "Dog destructor called" << "\n";
}
