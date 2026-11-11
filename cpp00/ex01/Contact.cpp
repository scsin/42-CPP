#include <iostream>
#include "Contact.hpp"
#include "helpers.hpp"

bool Contact::new_contact()
{
    print_message("Type first name: ");
    std::getline(std::cin, f_name);
    print_message("Type last name: ");
    std::getline(std::cin, l_name);
    print_message("Type nickname: ");
    std::getline(std::cin, nickname);
    print_message("Type phone number: ");
    std::getline(std::cin, p_number);
    print_message("Type darkest secret: ");
    std::getline(std::cin, d_secret);
    if (value_is_empty(f_name, l_name, nickname, p_number, d_secret))
        return (false);
    return (true);
}

std::string Contact::get_f_name()
{
    return f_name;
}

std::string Contact::get_l_name()
{
    return l_name;
}

std::string Contact::get_nickname()
{
    return nickname;
}

std::string Contact::get_p_number()
{
    return p_number;
}

std::string Contact::get_d_secret()
{
    return d_secret;
}
