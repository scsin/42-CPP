#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook {
    public:
        Contact contact_list[8];

    public:
        void create_contact();
        std::string add_to_list(Contact contact);
        std::string get_list();
};

#endif
