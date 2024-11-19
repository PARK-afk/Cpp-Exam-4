#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
    _brain->setIdeas("sleep");
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _brain = new Brain(*(dog._brain));
}

Dog  &Dog::operator=(const Dog &assign)
{
   	std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assign)
        return (*this);
    _type = assign._type;
    delete _brain;
    _brain = new Brain(*(assign._brain));
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog is gone.." << std::endl;
    delete _brain;
}

void    Dog::makeSound(void) const
{
    std::cout << "VULK" << std::endl;
}

Brain   *Dog::getBrain() const
{
    return (_brain);
}
