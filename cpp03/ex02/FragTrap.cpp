#include "FragTrap.hpp"
#include <iostream>

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap [" << name << "]: Hey! Give me a high five! ✋" << std::endl;
}

FragTrap::FragTrap( void ) : ClapTrap() {
    std::cout << "FragTrap [" << name << "] default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap [" << name << "] constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& ft ) : ClapTrap(ft) { // copy constructor
    std::cout << "FragTrap [" << name << "] copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& ft ) { // copy assignment
    if (this != &ft) {
		this->name = ft.name;
		this->_hitPoints = ft._hitPoints;
		this->_energyPoints = ft._energyPoints;
		this->_attackDamage = ft._attackDamage;
		std::cout << "FragTrap [" << name << "] copy assignment called" << std::endl;
    }
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "\nFragTrap [" << name << "] at address [" << this << "] destructor called" << std::endl;
}
