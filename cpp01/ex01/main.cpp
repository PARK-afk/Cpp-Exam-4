#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Zombie = ZombieHorde(10, "ZOOOOMBIE");
	
	for (int i = 0; i < 10; i++)
	{
		Zombie[i].announce();
	}
	delete [] Zombie; 
	return 0;
}