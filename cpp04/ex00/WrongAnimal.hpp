#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &cat);
        WrongAnimal& operator=(const WrongAnimal &assign);
        ~WrongAnimal();
        void        makeSound(void) const;
        std::string getType(void) const;
};

#endif
