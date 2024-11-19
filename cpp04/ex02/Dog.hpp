#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private :
    Brain   *_brain;
    public:
        Dog();
        Dog(const Dog &cat);
        Dog& operator=(const Dog &assign);
        ~Dog();
        void    makeSound(void) const;
        Brain   *getBrain() const;
};

#endif