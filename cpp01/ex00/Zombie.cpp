#include "Zombie.hpp"

zombie::zombie(std::string name)
{
	this->_name = name;
}

zombie::~zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}

void	zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
