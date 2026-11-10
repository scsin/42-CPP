#include "PhoneBook.hpp"
#include "helpers.hpp"
#include <string> // remover

void PhoneBook::create_contact()
{
    Contact contact;
    contact.new_contact();
    add_to_list(contact);
}

std::string PhoneBook::add_to_list(Contact contact)
{
    contact_list[0] = contact;
    return "added\n";
}

std::string PhoneBook::get_list()
{
    print_message(contact_list[0].get_f_name());
    print_message(contact_list[0].get_l_name());
    print_message(contact_list[0].get_nickname());
    print_message(contact_list[0].get_p_number());
    print_message(contact_list[0].get_d_secret());
    return "get_list\n";
}
