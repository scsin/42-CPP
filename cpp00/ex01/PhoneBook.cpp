#include "PhoneBook.hpp"
#include "helpers.hpp"

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

void PhoneBook::print_list()
{
    int count = 0;
    while (count < MAX)
    {
        print_message(contact_list[index].get_f_name());
        print_message(contact_list[index].get_l_name());
        print_message(contact_list[index].get_nickname());
        print_message(contact_list[index].get_p_number());
        print_message(contact_list[index].get_d_secret());
        index = (index + 1) % MAX;
        count++;
    }
    index = 0;
}
