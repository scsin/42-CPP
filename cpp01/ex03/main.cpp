#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
  {
    Weapon clubA = Weapon("crude spiked A club");
    HumanA bob("Bob", clubA);
    bob.attack();
    clubA.setType("some other type of A club");
    bob.attack();
  }
  std::cout << std::endl;
  {
    Weapon clubB = Weapon("crude spiked B club");
    HumanB jim("Jim");
    jim.setWeapon(&clubB);
    jim.attack();
    clubB.setType("some other type of B club");
    jim.attack();
  }
  return 0;
}
