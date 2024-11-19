#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &ainmal);
		Animal& operator=(const Animal &assign);
		virtual ~Animal();
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
