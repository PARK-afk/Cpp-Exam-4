#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
}

HumanB::~HumanB(void)
{
	std::cout << name << " is dead" << std::endl;
}

void	HumanB::attack(void){
	std::cout << name << " attack (Weapon : " << weapon->getType() + ")" << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon){
	weapon = &_weapon;
}