#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name)
{
	Zombie	*Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Horde[i].setName(name); 
	}
	return Horde;
}
