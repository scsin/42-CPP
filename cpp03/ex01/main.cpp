#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("Robot");
    c.attack("Paçoquita");
    ScavTrap a("Milo");
    a.attack("Gandalf");
    ScavTrap b;
	b = a;
    b.attack("Milo");
    ScavTrap d(c);
	d.takeDamage(5);
    d.beRepaired(1);
	d.guardGate();
    return (0);
}
