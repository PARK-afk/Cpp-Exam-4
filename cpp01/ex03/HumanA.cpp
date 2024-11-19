#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon)
{	
}

HumanA::~HumanA(void)
{
	std::cout << name << " is dead " << std::endl;
}

void	HumanA::attack(void){
	std::cout << name << " attack (Weapon : " << weapon.getType() + ")" << std::endl;
}