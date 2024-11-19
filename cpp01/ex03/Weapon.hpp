#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "HumanA.hpp"
# include "HumanB.hpp"
# include <iostream>
# include <sstream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string _type);
		~Weapon(void);
		const std::string &getType(void) const;
		void setType(std::string value);
};



#endif