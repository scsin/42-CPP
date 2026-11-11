#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

#define MAX 8

class PhoneBook {
    public:
        int added_contacts;
        int index;
        Contact contact_list[MAX];

    private:
        void display_user();
        int get_list_size();

    public:
        PhoneBook() : added_contacts(0), index(0) {}
        void create_contact();
        void add_to_list(Contact contact);
        void display_list();
};

#endif
