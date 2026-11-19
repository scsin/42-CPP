#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		std::string name;

	public:
        void attack(const std::string& target);

		ScavTrap(std::string name);
		ScavTrap( const ScavTrap& st );
		ScavTrap& operator=( const ScavTrap& st );
		~ScavTrap();
};

#endif
