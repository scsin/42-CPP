#include "PhoneBook.hpp"
#include "helpers.hpp"

#include <iostream>
#include <iomanip>
#include <stdlib.h>

void PhoneBook::create_contact()
{
    Contact contact;
    if (contact.new_contact())
        add_to_list(contact);
}

void PhoneBook::add_to_list(Contact contact)
{
    contact_list[added_contacts] = contact;
    added_contacts = (added_contacts + 1) % MAX;
}

template <typename custom_type>
void print_info(custom_type value)
{
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << value;
}

std::string formatColumn(std::string text)
{
    if (text.length() > 10)
        return text.substr(0, 9) + ".";

    return std::string(10 - text.length(), ' ') + text;
}


int PhoneBook::get_list_size()
{
    int i = 0;
    while (contact_list[i].get_f_name().c_str())
        i++;
    return (i);
}

void PhoneBook::display_user()
{
    std::string user_index;
    std::cout << "Enter a user index: ";
    std::getline(std::cin, user_index);
    if (atoi(user_index.c_str()) >= 1 && atoi(user_index.c_str()) <= 8)
    {
        print_info(formatColumn(contact_list[atoi(user_index.c_str()) - 1].get_f_name()));
        std::cout << "\n";
    }
    else
        print_message("Not a valid index. Returning to main menu.", true);
}

void PhoneBook::display_list()
{
    int count = 0;
    while (count < MAX && !contact_list[index].get_f_name().empty())
    {
        print_info(count + 1);
        print_info(formatColumn(contact_list[index].get_f_name()));
        print_info(formatColumn(contact_list[index].get_l_name()));
        print_info(formatColumn(contact_list[index].get_nickname()));
        print_info(formatColumn(contact_list[index].get_p_number()));
        print_info(formatColumn(contact_list[index].get_d_secret()));
        std::cout << "|";
        std::cout << "\n";
        index = (index + 1) % MAX;
        count++;
    }
    if (count == 0)
        print_message("Empty List: Add a new contact", true);
    else
        display_user();
    index = 0;
}
