#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string club)
{
  type = club;
}

const std::string Weapon::getType()
{
  return (type);
}

void  Weapon::setType(std::string newType)
{
  type = newType;
}
