#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _type = dog._type;
}

Dog  &Dog::operator=(const Dog &assign)
{
   	std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assign)
        return (*this);
    _type = assign._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog is gone.." << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "VULK" << std::endl;
}
