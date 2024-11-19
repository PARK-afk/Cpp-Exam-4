#include "Zombie.hpp"

int	main(void)
{
	zombie	stack("stack");
	zombie	*heap = NewZombie("heap");

	stack.announce();
	heap->announce();
	RandomChump("orange");
	delete heap;
	return 0;
}