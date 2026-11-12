#include <iostream>
#include <fstream>
#include <string>
#include "file_helpers.hpp"

static bool valid_params(std::ifstream &fs, char **av)
{
    if (file_exists(fs, av[1]))
        return (true);
    return (false);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: Missing params" << std::endl;
        return (1);
    }

    std::ifstream fs;
    std::string msg;
    if (valid_params(fs, av))
    {
        msg = read_file(fs, av[1], av[2], av[3]);
        std::cout << msg << std::endl;
        fs.close();
        return (0);
    }

    std::cout << "Error: Invalid params" << std::endl;
    fs.close();
    return (1);
}
