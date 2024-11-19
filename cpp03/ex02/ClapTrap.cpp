#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "default";
    this->_hitpoints = 10;
    this->_energypoints = 10;
    this->_attackdamage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ClapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this == &ct)
        return (*this);
    _name = ct._name;
    _hitpoints = ct._hitpoints;
    _energypoints = ct._energypoints;
    _attackdamage = ct._attackdamage;
    return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitpoints = 10;
    _energypoints = 10;
    _attackdamage = 0;
    std::cout << "ClapTrap " << _name <<" constructor called" << std::endl;
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name <<" destructor called" << std::endl;
}

// attack & repair -= 1

// ClapTrap <name> attacks <target>, causing <damage> points of damage!

void ClapTrap::attack(const std::string& target)
{
    if (_energypoints == 0 || _hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is can't attack " << target << ", causing ClapTrap is dead ..." << std::endl;
        return ;
    }
    else if (_hitpoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
        _energypoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints == 0)
    {
        std::cout << "ClapTrap "<< _name << " HP : " << _hitpoints << " ... dead" << std::endl;
        return ;
    }
    if (_hitpoints <= amount)
        _hitpoints = 0;
    else
        _hitpoints -= amount;
    std::cout << "ClapTrap " << _name << " has taken a " << amount << " damage" << std::endl;
    if (_hitpoints == 0)
        std::cout << "ClapTrap "<< _name << " HP : " << _hitpoints << " ... dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energypoints == 0 || _hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't be Repaired.. Because ClapTrap is dead ..." << std::endl;
        return ;
    }
    if (_hitpoints != 0)
    {
        if ((_hitpoints + amount) > 10)
            _hitpoints = 10;
        std::cout	<< "ClapTrap " << _name << " has been repaired of " << amount << " Hit points. It has now " << _hitpoints << " Hit points" << std::endl;
    }
}