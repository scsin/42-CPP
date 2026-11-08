#include "Harl.hpp"
#include <iostream>
#include <map>

void    Harl::debug( void ) {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\n";
}

void    Harl::info( void ) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n";
}

void    Harl::warning( void ) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << "\n";
}

void    Harl::error( void ) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << "\n";
}

void    Harl::complain( std::string level ) {
    std::map<std::string, void (Harl::*)()> func;
    std::map<std::string, void (Harl::*)()>::iterator it;
    func["DEBUG"] = &Harl::debug;
    func["ERROR"] = &Harl::error;
    func["INFO"] = &Harl::info;
    func["WARNING"] = &Harl::warning;

    it = func.find(level);
    if (it == func.end())
    {
        std::cout << "Invalid param";
        return ;
    }
    (this->*it->second)();
}