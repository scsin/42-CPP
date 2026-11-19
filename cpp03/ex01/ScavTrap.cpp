#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

void ScavTrap::attack(const std::string& target) {
	// what happens with the validations inside ClapTrap? do they got 'injected' here?
    std::cout << "ScavTrap [" << name
        << "] attacks [" << target <<
        "], causing " << _attackDamage <<
        " points of damage!" << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap [" << name << "] constructor called" << "\n";
}

ScavTrap::ScavTrap ( const ScavTrap& st ) : ClapTrap() { // copy constructor
	std::cout << "ScavTrap copy constructor called" << "\n";
}

ScavTrap& ScavTrap::operator=( const ScavTrap& st ) { // copy assignment
	std::cout << "ScavTrap copy assignment called" << "\n";
	return (*this);
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap destructor called" << "\n";
}
