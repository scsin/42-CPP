#include <string>

class ClapTrap {
    private:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;

    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ClapTrap(std::string name);
        ClapTrap( const ClapTrap& ct ); // copy constructor
        ClapTrap operator=( const ClapTrap& ct ); // copy assignment
        ~ClapTrap();
};
