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

std::string formatColumn(std::string text)
{
    if (text.length() > 10)
        return text.substr(0, 9) + ".";

    return std::string(10 - text.length(), ' ') + text;
}

void PhoneBook::print_info(int count, int index)
{
    std::cout << count;
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << formatColumn(contact_list[index].get_f_name());
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << formatColumn(contact_list[index].get_l_name());
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << formatColumn(contact_list[index].get_nickname());
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << formatColumn(contact_list[index].get_p_number());
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << formatColumn(contact_list[index].get_d_secret());
    std::cout << "|";
    std::cout << "\n";
}

void PhoneBook::display_user()
{
    std::string user_index;
    std::cout << "Enter a user index: ";
    std::getline(std::cin, user_index);
    int user_index_converted = atoi(user_index.c_str());
    if (user_index.length() > 1 || (user_index_converted < 0 || user_index_converted > 9))
    {
        print_message("Not a valid index. Returning to main menu.", true);
        return ;
    }
    if (user_index_converted > 0 && user_index_converted <= 8
            && !contact_list[user_index_converted - 1].get_f_name().empty()
            && user_index_converted - 1 <= (int)contact_list.size())
        print_info(user_index_converted, user_index_converted - 1);
    else
        print_message("Not a valid index. Returning to main menu.", true);
}

void PhoneBook::display_list()
{
    int count = 0;
    while (count < MAX && !contact_list.empty()
            && !contact_list[index].get_f_name().empty())
    {
        print_info(count + 1, index);
        index = (index + 1) % MAX;
        count++;
    }
    if (count == 0)
        print_message("Empty List: Add a new contact", true);
    else
        display_user();
    index = 0;
}
