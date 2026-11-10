#include <iostream>
#include "PhoneBook.hpp"
#include "Greetings.hpp"

int option_converter(std::string option)
{
    if (option == "ADD" || option == "0")
        return ADD;
    else if (option == "SEARCH" || option == "1")
        return SEARCH;
    else if (option == "EXIT" || option == "2")
        return EXIT;
    else
        return (-1);
}

void    enter_valid_command()
{
    std::cout << "Enter one command: ";
}

int main()
{
    greetings();
    std::string option;
    int option_int = -1;
    PhoneBook phonebook;
    while (option_int != 2)
    {
        if (option_int == 0)
            phonebook.add();
        if (option_int == 1)
            phonebook.list();
        enter_valid_command();
        std::getline(std::cin, option);
        option_int = option_converter(option);
    }
    std::cout << "Exiting Awesome PhoneBook" << "\n";
}
