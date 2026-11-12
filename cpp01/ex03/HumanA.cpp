#include "HumanA.hpp"

HumanA::HumanA(std::string nickname, Weapon &equipment)
    : name(nickname), weapon(equipment)
{
}

void  HumanA::attack()
{
  std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
