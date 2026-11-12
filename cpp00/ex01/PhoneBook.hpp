#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <array>

#define MAX 8

class PhoneBook {
    public:
        int added_contacts;
        int index;
        std::array<Contact, MAX> contact_list;

    private:
        void print_info(int count, int index);
        void display_user();

    public:
        PhoneBook() : added_contacts(0), index(0) {}
        void create_contact();
        void add_to_list(Contact contact);
        void display_list();
};

#endif
