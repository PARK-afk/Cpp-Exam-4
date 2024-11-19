#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name = "default";
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ScavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ct)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this == &ct)
        return (*this);
    _name = ct._name;
    _hitpoints = ct._hitpoints;
    _energypoints = ct._energypoints;
    _attackdamage = ct._attackdamage;
    return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    std::cout << "ScavTrap " << _name <<" constructor called" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name <<" destructor called" << std::endl;
}

// attack & repair -= 1

// ScavTrap <name> attacks <target>, causing <damage> points of damage!

void ScavTrap::attack(const std::string& target)
{
    if (_energypoints == 0 || _hitpoints == 0)
    {
        std::cout << "ScavTrap " << _name << " is can't attack " << target << ", causing ScavTrap is dead ..." << std::endl;
        return ;
    }
    else if (_hitpoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
        _energypoints -= 1;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints == 0 || _energypoints == 0)
        std::cout << "ScavTrap " << _name << " is dead ..." << std::endl;
    if (_hitpoints <= amount)
        _hitpoints = 0;
    else
        _hitpoints -= amount;
    std::cout << "ScavTrap " << _name << " has taken a " << amount << " damage" << std::endl;
    if (_hitpoints == 0)
        std::cout << "ScavTrap " << _name <<  " HP : " << _hitpoints << " ... dead" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (_energypoints == 0 || _hitpoints == 0)
    {
        std::cout << "ScavTrap can't be Repaired.. Because ScavTrap is dead ..." << std::endl;
        return ;
    }
    if (_hitpoints != 0)
    {
        if ((_hitpoints + amount) > 100)
            _hitpoints = 100;
        std::cout	<< "ScavTrap " << _name << " has been repaired of " << amount << " Hit points. It has now " << _hitpoints << " Hit points" << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    if (!_hitpoints || !_energypoints)
        std::cout << "ScavTrap " << _name << " can't Guard Gate .. " << std::endl;
    else
        std::cout << "ScavTrap " << _name << " Guard Gate On ! !" << std::endl;
}
