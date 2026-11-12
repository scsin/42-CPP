#include <string>

#define ZOMBIE_QT 4

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie {
  public:
    std::string name;
  
  public:
    void announce( void );
};

Zombie  create_zombie(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif
