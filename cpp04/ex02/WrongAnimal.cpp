#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "Wrong default";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    _type = animal._type;
    std::cout << "Amimal copy constructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &assign)
{
   	std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assign)
        return (*this);
    _type = assign._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (_type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal say nothing, this message is wrong" << std::endl;
}