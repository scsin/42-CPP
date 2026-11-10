#include "PhoneBook.hpp"
#include <iostream> // remover

Contact PhoneBook::add()
{
    Contact contact;
    contact.new_contact();
    /*std::cout << contact.get_f_name() << "\n";
    std::cout << contact.get_l_name() << "\n";
    std::cout << contact.get_nickname() << "\n";
    std::cout << contact.get_p_number() << "\n";
    std::cout << contact.get_d_secret() << "\n";*/
    return contact;
}

std::string PhoneBook::list()
{
    std::cout << "LIST\n";
    return "LIST\n";
}
