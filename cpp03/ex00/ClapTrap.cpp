#include <iostream>
#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target) {
    if (!this->hit_points || !this->energy_points)
    {
        std::cout << "Can't attack, not enough energy / hit points" << std::endl;
        return ;
    }
    if (this->name == target) // update validation?
    {
        std::cout << "You can't attack yourself!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name
        << " attacks " << target <<
        ", causing " << attack_damage <<
        " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name <<
        " took " << amount << " of damage ";
    this->energy_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!this->hit_points || !this->energy_points)
    {
        std::cout << "Can't repair, not enough energy / hit points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name <<
        " took a life potion recovering " << amount <<
        " point of life." << std::endl;
    this->energy_points++;
}

ClapTrap::ClapTrap(std::string name) : hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "ClapTrap [" << name << "] copy constructor called" << std::endl;
    this->name = name;
};

ClapTrap::ClapTrap( const ClapTrap& ct ) : hit_points(10), energy_points(10), attack_damage(0) { // copy constructor
    this->name = "Milo2";
}

ClapTrap ClapTrap::operator=( const ClapTrap& ct ) { // copy assignment
    std::cout << "ClapTrap [" << name << "] copy assignment called" << std::endl;
    return (*this);
};

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap [" << name << "] destructor called" << std::endl;
};
