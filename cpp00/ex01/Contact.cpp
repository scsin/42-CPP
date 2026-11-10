#include <iostream>
#include "Contact.hpp"

void Contact::new_contact()
{
    std::cout << "Type first name: ";
    std::getline(std::cin, f_name);
    std::cout << "Type last name: ";
    std::getline(std::cin, l_name);
    std::cout << "Type nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Type phone number: ";
    std::getline(std::cin, p_number);
    std::cout << "Type darkest secret: ";
    std::getline(std::cin, d_secret);
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
