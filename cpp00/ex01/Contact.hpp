#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
    private:
        std::string f_name;
        std::string l_name;
        std::string nickname;
        std::string p_number;
        std::string d_secret;

    public:
        void new_contact();
        std::string get_f_name();
        std::string get_l_name();
        std::string get_nickname();
        std::string get_p_number();
        std::string get_d_secret();
};

#endif
