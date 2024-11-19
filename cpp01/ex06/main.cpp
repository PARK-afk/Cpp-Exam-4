#include "Harl.hpp"

int	main(int ac, char **av)
{
	int 	i;
	Harl	harl;
	std::string set[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	std::cout << "Choose one > DEBUG | INFO | WARNING | ERROR <" << std::endl;
	if (ac == 2)
	{
		for (i = 0; i < 4; i++)
		{
			if (av[1] == set[i])
				harl.complain(i);
		}
	}
	return 0;
}