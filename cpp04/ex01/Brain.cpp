#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = brain._ideas[i];
}

Brain &Brain::operator=(const Brain &assign)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this == &assign)
        return (*this);
    for (int i = 0; i < 100; i++)
        _ideas[i] = assign._ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "no brain.." << std::endl;
}

std::string Brain::getIdeas() const
{
    if (_ideas[0].empty())
        return ("noting");
    return (_ideas[0]);
}

void    Brain::setIdeas(std::string ideas)
{
    for (int i = 0; i < 99; i++)
        _ideas[i] = ideas;
}