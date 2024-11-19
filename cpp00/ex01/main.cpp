#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook	pb;
	int			stoi;
	std::string	inputNumber;

	while (true)
	{
		std::cout << "Choose a Command > ADD | SEARCH | EXIT <" << std::endl;
		getline(std::cin, command);
		if (std::cin.eof() || std::cin.fail())
			return -1;
		if (command == "ADD" || command == "add")
			pb.addContact();
		else if (command == "SEARCH" || command == "search")
		{
			pb.searchPreview();
			pb.printInfo();
			if (std::cin.eof() || std::cin.fail())
				return 1;
			std::cout << "choose index : ";
			getline(std::cin, inputNumber);
			if (inputNumber.find_first_not_of("0123456789") == false || inputNumber.empty())
				std::cout << "Does Not collect Index" << std::endl;
			else
			{
				std::istringstream iss(inputNumber);
				iss >> stoi;
				stoi -= 1;
				pb.selectPrint(stoi % 8);
			}
		}
		else if (command == "EXIT" || command == "exit")
			break ;
		else
			std::cout << "Command Not Found" << std::endl;
		command.clear();
	}
	return (0);
}