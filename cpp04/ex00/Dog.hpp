#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &cat);
        Dog& operator=(const Dog &assign);
        ~Dog();
        void    makeSound(void) const;
};

#endif
