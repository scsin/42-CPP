#include "Harl.hpp"

bool valid_param(const int level) {
    switch (level) {
        case DEBUG:
        case INFO:
        case WARNING:
        case ERROR:
            return (true);
        default:
            return (false);
    }
}

int convert_param(const std::string level) {
    if (level == "DEBUG" || level == "debug")
        return (DEBUG);
    else if (level == "INFO" || level == "info")
        return (INFO);
    else if (level == "WARNING" || level == "warning")
        return (WARNING);
    else if (level == "ERROR" || level == "error")
        return (ERROR);
    return (-1);
}

int main(int ac, char **av) {
    if (ac != 2)
        return (1);

    Harl    callHarl;
    int level = convert_param(av[1]);
    if (valid_param(level))
        callHarl.complain(level);
    else
        callHarl.complain(-1);
}
