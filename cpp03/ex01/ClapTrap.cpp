#include <iostream>
#include "ClapTrap.hpp"

bool ClapTrap::canAttack() {
	if (!this->_hitPoints || !this->_energyPoints)
    {
        std::cout << "Can't attack, not enough energy / hit points" << std::endl;
        return (false);
    }
	return (true);
}

bool ClapTrap::samePlayer(const std::string& target) {
    if (this->name == target)
    {
        std::cout << "You can't attack yourself!" << std::endl;
        return (true);
	}
	return (false);
}

void ClapTrap::attack(const std::string& target) {
	if (!canAttack() || samePlayer(target))
		return ;
    this->_energyPoints--;
    std::cout << "ClapTrap [" << name
        << "] attacks [" << target <<
        "], causing " << _attackDamage <<
        " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hitPoints -= amount;
    std::cout << "ClapTrap [" << name
		<< "] took " << amount
		<< " of damage. Hit Points: " << _hitPoints
		<< "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!this->_hitPoints || !this->_energyPoints)
    {
        std::cout << "Can't repair, not enough energy / hit points" << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << "ClapTrap [" << name <<
        "] took a life potion, recovering " << amount <<
        " point of life. Total: " << _hitPoints << std::endl;
}

ClapTrap::ClapTrap ( void ) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap [" << name << "] default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap [" << name << "] constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& ct ) { // copy constructor
    this->name = ct.name;
    this->_hitPoints = ct._hitPoints;
    this->_energyPoints = ct._energyPoints;
    this->_attackDamage = ct._attackDamage;

    std::cout << "ClapTrap [" << name << "] copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& ct ) { // copy assignment
    if (this != &ct)
    {
        this->name = ct.name;
        this->_hitPoints = ct._hitPoints;
        this->_energyPoints = ct._energyPoints;
        this->_attackDamage = ct._attackDamage;
    }
    std::cout << "ClapTrap [" << name << "] copy assignment called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap [" << name << "] at address [" << this << "] destructor called" << std::endl;
}
