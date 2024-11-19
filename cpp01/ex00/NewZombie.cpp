#include "Zombie.hpp"

zombie	*NewZombie(std::string name)
{
	zombie	*NZ = new zombie(name);
	return NZ;
}