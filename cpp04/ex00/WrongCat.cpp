#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "Wrongcat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal(wrongcat)
{
    _type = wrongcat._type;
    std::cout << "Cat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
   	std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assign)
        return (*this);
    _type = assign._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat is gone..." << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Wrong~" << std::endl;
}
