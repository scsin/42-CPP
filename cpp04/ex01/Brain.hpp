#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain {
	public:
		std::string ideas[100];

		Brain( void );
		Brain( const Brain& b ); // copy constructor
		Brain& operator=( const Brain& b ); // copy assignment
		~Brain();
};

#endif
