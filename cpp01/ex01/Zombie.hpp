#include <string>

#define ZOMBIE_QT 4

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class	Zombie {
	private:
		std::string	name;

	public:
		void announce( void );
		void setName(std::string name);
		Zombie() {};
		~Zombie( void );
};

Zombie *zombieHorde(int N, std::string name);

#endif
