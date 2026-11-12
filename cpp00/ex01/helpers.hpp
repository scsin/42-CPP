#ifndef GREETINGS_H
#define GREETINGS_H

#include <string>

enum Option {
    ADD,
    SEARCH,
    EXIT
};

void    print_message(std::string msg, bool new_line);
void    greetings();
bool    value_is_empty(
        std::string f_name,
        std::string l_name,
        std::string nickname,
        std::string p_number,
        std::string d_secret);

#endif
