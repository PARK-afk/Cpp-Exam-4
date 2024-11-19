#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    _type = "Animal";
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Amimal copy constructor called" << std::endl;
    _type = animal._type;
}

Animal	&Animal::operator=(const Animal &assign)
{
   	std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assign)
        return (*this);
    _type = assign._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (_type);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal say nothing, this message is wrong" << std::endl;
}
