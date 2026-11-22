#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        void highFivesGuys(void);

        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( const FragTrap& ft ); // copy constructor
        FragTrap& operator=( const FragTrap& ft ); // copy assignment
        ~FragTrap();
};
