#include "Brain.hpp"
#include <iostream>

Brain::Brain ( void ) {
	std::cout << "Brain default constructor called" << "\n";
}

Brain::Brain( const Brain& b ) { // copy constructor
	for (unsigned int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
	std::cout << "Brain copy constructor called" << "\n";
}

Brain& Brain::operator=( const Brain& b ) { // copy assignment
	if (this != &b)
	{
		for (unsigned int i = 0; i < 100; i++)
			this->ideas[i] = b.ideas[i];
		std::cout << "Brain copy assignment called" << "\n";
	}
	return (*this);
}

Brain::~Brain () {
	std::cout << "Brain destructor called" << "\n";
}
