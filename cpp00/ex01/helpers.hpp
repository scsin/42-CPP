#ifndef GREETINGS_H
#define GREETINGS_H

#include <string>

enum Option {
    ADD,
    SEARCH,
    EXIT
};

void    print_message(std::string msg);
void    greetings();

#endif
