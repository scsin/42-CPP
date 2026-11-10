#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook {
    public:
        Contact contact_list[10];

    public:
        Contact add();
        std::string list();
};

#endif
