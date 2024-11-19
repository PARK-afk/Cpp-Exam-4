#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class zombie
{
private:
	std::string _name;
public:
	zombie(std::string name);
	~zombie();
	void	announce(void);
};

zombie	*NewZombie(std::string name);
void	RandomChump(std::string name);

#endif