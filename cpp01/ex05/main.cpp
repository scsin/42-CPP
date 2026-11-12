#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (1);

    Harl callHarl;
    callHarl.complain(av[1]);
}
