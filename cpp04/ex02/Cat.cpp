#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
    _brain->setIdeas("sleep");
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    _brain = new Brain(*(cat._brain));
}

Cat  &Cat::operator=(const Cat &assign)
{
   	std::cout << "Cat copy assignment operator called" << std::endl;
    if (this == &assign)
        return (*this);
    _type = assign._type;
    delete _brain;
    _brain = new Brain(*(assign._brain));
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat is gone..." << std::endl;
    delete _brain;
}

void    Cat::makeSound(void) const
{
    std::cout << "ma VU" << std::endl;
}

Brain*  Cat::getBrain(void) const
{
    return (_brain);
}