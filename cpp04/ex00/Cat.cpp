#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat &animal) : Animal(animal)
{
    std::cout << "Cat copy constructor called" << std::endl;
    _type = animal._type;
}

Cat  &Cat::operator=(const Cat &assign)
{
   	std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assign)
        return (*this);
    _type = assign._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat is gone..." << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "ma VU" << std::endl;
}
