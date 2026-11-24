#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("Robot");
    c.attack("Paçoquita");
    ScavTrap a("Milo");
    a.attack("Gandalf");
    ScavTrap b;
	b = a;
	/*std::cout << std::endl;
	std::cout << "Name: " << a.name << " & Address: " << &a << std::endl;
	std::cout << "Name: " << b.name << " & Address: " << &b << std::endl;
	std::cout << std::endl;*/
    b.attack("Milo");
    ScavTrap d(c);
	/*std::cout << std::endl;
	std::cout << "Name: " << c.name << " & Address: " << &c << std::endl;
	std::cout << "Name: " << d.name << " & Address: " << &d << std::endl;
	std::cout << std::endl;*/
	d.takeDamage(5);
    d.beRepaired(1);
	d.guardGate();
    return (0);
}
