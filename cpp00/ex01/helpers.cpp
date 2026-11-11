#include <iostream>
#include "helpers.hpp"

void    print_message(std::string msg, bool new_line)
{
    std::cout << msg;
    if (new_line)
        std::cout << "\n";
}

void    greetings()
{
    print_message("Welcome to Awesome PhoneBook", true);
    print_message("0. ADD: save a new contact", true);
    print_message("1. SEARCH: display a specific contact", true);
    print_message("2. EXIT: quit program", true);
}

bool    value_is_empty(
        std::string f_name,
        std::string l_name,
        std::string nickname,
        std::string p_number,
        std::string d_secret)
{
    if (f_name.empty()
            || l_name.empty()
            || nickname.empty()
            || p_number.empty()
            || d_secret.empty())
    {
        perror("Error: field can't be empty");
        return (true);
    }
    return (false);
}
