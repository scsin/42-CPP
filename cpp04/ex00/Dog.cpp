#include <iostream>
#include "Dog.hpp"

void Dog::makeSound() const {
    std::cout << "Woof!" << "\n";
}

Dog::Dog( void ) : Animal() {
    type = "Dog";
    std::cout << type << " default constructor called" << "\n";
}

Dog::Dog( std::string type ) : Animal("Dog") {
    (void)type;
    std::cout << "Dog constructor called" << "\n";
}

Dog::Dog( const Dog& dg ) : Animal("Dog") { // copy constructor
    (void)dg;
    std::cout << "Dog copy constructor called" << "\n";
}

Dog& Dog::operator=( const Dog& dg ) { // copy assignment
    (void)dg;
    std::cout << "Dog copy assignment called" << "\n";
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << "\n";
}
