#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "default";
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = FragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &ct)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this == &ct)
        return (*this);
    _name = ct._name;
    _hitpoints = ct._hitpoints;
    _energypoints = ct._energypoints;
    _attackdamage = ct._attackdamage;
    return (*this);
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "FragTrap " << _name <<" constructor called" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name <<" destructor called" << std::endl;
}

// attack & repair -= 1

// FragTrap <name> attacks <target>, causing <damage> points of damage!

void FragTrap::attack(const std::string& target)
{
    if (_energypoints == 0 || _hitpoints == 0)
    {
        std::cout << "FragTrap " << _name << " is can't attack " << target << ", causing FragTrap is dead ..." << std::endl;
        return ;
    }
    if (_hitpoints > 0)
    {
        std::cout << "FragTrap " << _name << " attack " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
        _energypoints -= 1;
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints <= amount)
        _hitpoints = 0;
    else
        _hitpoints -= amount;
    std::cout << "FragTrap " << _name << " has taken a " << amount << " damage" << std::endl;
    if (_hitpoints == 0)
        std::cout << "FragTrap's HP : " << _hitpoints << " ... dead" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (_energypoints == 0 || _hitpoints == 0)
    {
        std::cout << "FragTrap can't be Repaired.. Because FragTrap's Energy is done ..." << std::endl;
        return ;
    }
    if (_hitpoints != 0)
    {
        if ((_hitpoints + amount) > 100)
            _hitpoints = 100;
        std::cout	<< "FragTrap " << _name << " has been repaired of " << amount << " Hit points. It has now " << _hitpoints << " Hit points" << std::endl;
    }
}

void    FragTrap::highFivesGuys()
{
    if (!_hitpoints || !_energypoints)
        std::cout << "FragTrap " << _name << " can't High Five .. " << std::endl;
    else
        std::cout << "FragTrap " << _name << "High Fives Guys ! !" << std::endl;
}
