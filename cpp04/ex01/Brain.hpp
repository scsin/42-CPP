#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain {
	std::string ideas[100];

	public:
		Brain( void );
		Brain( const Brain& b ); // copy constructor
		Brain& operator=( const Brain& b ); // copy assignment
		~Brain();
};

#endif
