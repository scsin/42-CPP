#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("Robot");
    c.attack("Paçoquita");
    ClapTrap a("Milo");
    a.attack("Milo");
    ClapTrap b = a;
	/*std::cout << std::endl;
	std::cout << "Name: " << a.name << " & Address: " << &a.name << std::endl;
	std::cout << "Name: " << b.name << " & Address: " << &b.name << std::endl;
	std::cout << std::endl;*/
    b.attack("Moon");
    ClapTrap d(c);
    d.beRepaired(1);
    return (0);
}
