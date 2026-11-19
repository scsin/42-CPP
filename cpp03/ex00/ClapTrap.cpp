#include <iostream>
#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target) {
    if (!this->_hitPoints || !this->_energyPoints)
    {
        std::cout << "Can't attack, not enough energy / hit points" << std::endl;
        return ;
    }
    if (this->name == target)
    {
        std::cout << "You can't attack yourself!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap [" << name
        << "] attacks [" << target <<
        "], causing " << _attackDamage <<
        " points of damage!" << std::endl;
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap [" << name <<
        "] took " << amount << " of damage ";
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!this->_hitPoints || !this->_energyPoints)
    {
        std::cout << "Can't repair, not enough energy / hit points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap [" << name <<
        "] took a life potion, recovering " << amount <<
        " point of life." << std::endl;
    this->_hitPoints++;
    this->_energyPoints--;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap [" << name << "] constructor called" << std::endl;
    this->name = name;
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
    std::cout << "ClapTrap [" << name << "] destructor called" << std::endl;
}
