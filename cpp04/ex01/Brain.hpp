
class Brain {
	public:
		Brain( void );
		Brain( const Brain& b ); // copy constructor
		Brain& operator=( const Brain& b ); // copy assignment
		~Brain();
};
