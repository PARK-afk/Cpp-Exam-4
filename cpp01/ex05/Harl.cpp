#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*function_Ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	switch (level[0])
	{
	case 'D':
		(this->*function_Ptr[0])();
		break;
	case 'I':
		(this->*function_Ptr[1])();
		break ;
	case 'W':
		(this->*function_Ptr[2])();
		break ;
	case 'E':
		(this->*function_Ptr[3])();
		break ;
	}
	return ;
}
