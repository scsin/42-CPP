#include "ScavTrap.hpp"
#include <iostream>
#include <string>

void ScavTrap::attack(const std::string& target) {
	if (!ClapTrap::canAttack() || ClapTrap::samePlayer(target))
		return ;

    std::cout << "ScavTrap [" << name
		<< "] attacks [" << target
		<< "], causing " << _attackDamage
		<< " points of damage!" << std::endl;
    this->_energyPoints--;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap [" << name << "] is now in Guard Gate mode" << "\n";
}

ScavTrap::ScavTrap ( void ) {
    std::cout << "ScavTrap [" << name << "] default constructor called" << std::endl;
};

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap [" << name << "] constructor called" << "\n\n";
}

ScavTrap::ScavTrap ( const ScavTrap& st ) : ClapTrap(st.name) { // copy constructor
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap [" << name << "] copy constructor called" << "\n\n";
}

ScavTrap& ScavTrap::operator=( const ScavTrap& st ) { // copy assignment
	if (this != &st)
	{
		this->name = st.name;
		std::cout << "ScavTrap [" << name << "] copy assignment called" << "]\n\n";
	}
	return (*this);
}

ScavTrap::~ScavTrap () {
	std::cout << "\nScavTrap [" << name << "] at the address [" << this << "] destructor called" << "\n";
}
