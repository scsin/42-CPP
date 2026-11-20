#include <string>

class ClapTrap {
    private:
        std::string name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

		ClapTrap( void );
        ClapTrap(std::string name);
        ClapTrap( const ClapTrap& ct ); // copy constructor
        ClapTrap& operator=( const ClapTrap& ct ); // copy assignment
        ~ClapTrap();
};
