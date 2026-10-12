#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int c = 0; av[i][c] != '\0'; c++)
				std::cout << (char)std::toupper(av[i][c]);
		}
	}
	std::cout << "\n";
	return (0);
}
