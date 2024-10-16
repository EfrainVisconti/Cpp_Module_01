#include "Harl.hpp"

int	get_level(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	input(argv);

	for (int i = 0; i < 4; i++)
		if (levels[i] == input)
			return i;
	return -1;
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}

	switch (get_level(argv[1]))
	{
		case 0:
			harl.complain("DEBUG");
			__attribute__((fallthrough));
		case 1:
			harl.complain("INFO");
			__attribute__((fallthrough));
		case 2:
			harl.complain("WARNING");
			__attribute__((fallthrough));
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}