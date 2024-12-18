#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &cat);
        Cat& operator=(const Cat &assign);
        ~Cat();
        void    makeSound(void) const;
};

#endif
