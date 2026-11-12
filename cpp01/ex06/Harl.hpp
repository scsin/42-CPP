#include <iostream>
#include <string>

enum Level {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

class   Harl {
    public:
        void complain( const int level );

    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};
