#include <iostream>
#include "helpers.hpp"

void    print_message(std::string msg)
{
    std::cout << msg << "\n";
}

void    greetings()
{
    print_message("Welcome to Awesome PhoneBook");
    print_message("0. ADD: save a new contact");
    print_message("1. SEARCH: display a specific contact");
    print_message("2. EXIT: quit program");
}
