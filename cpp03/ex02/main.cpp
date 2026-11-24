#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap e("Roberto");
    FragTrap c("Robot");
    c.attack("Paçoquita");
    ScavTrap a("Milo");
    a.attack("Milo");
    ScavTrap b = a;
	/*std::cout << std::endl;
	std::cout << "Name: " << a.name << " & Address: " << &a << " E/A Points: " << a._energyPoints << " " << a._attackDamage << std::endl;
	std::cout << "Name: " << b.name << " & Address: " << &b << " E/A Points: " << b._energyPoints << " " << b._attackDamage << std::endl;
	std::cout << std::endl;*/
    b.attack("Milo");
    FragTrap d(c);
	/*std::cout << std::endl;
	std::cout << "Name: " << c.name << " & Address: " << &c << " E/A Points: " << c._energyPoints << " " << c._attackDamage << std::endl;
	std::cout << "Name: " << d.name << " & Address: " << &d << " E/A Points: " << d._energyPoints << " " << d._attackDamage << std::endl;
	std::cout << std::endl;*/
	d.takeDamage(5);
    d.beRepaired(1);
	/*std::cout << std::endl;
	std::cout << "Name: " << c.name << " & Address: " << &c << " H/A Points: " << c._hitPoints << " " << c._attackDamage << std::endl;
	std::cout << "Name: " << d.name << " & Address: " << &d << " H/A Points: " << d._hitPoints << " " << d._attackDamage << std::endl;
	std::cout << std::endl;*/
    d.highFivesGuys();
    return (0);
}
