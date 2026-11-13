#include "Zombie.hpp"
#include <iostream>

void Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie( void ) {
	std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}
