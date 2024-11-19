#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon .. bye" << std::endl;
}

const std::string &Weapon::getType(void) const
{
	return type;
}
	
void Weapon::setType(std::string _type)
{
	type = _type;
}