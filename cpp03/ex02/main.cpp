#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
   ClapTrap a("A");
   ScavTrap b("B");
   FragTrap c("C");
   std::cout << std::endl;

    a.attack("C");
    c.takeDamage(30);
    b.attack("A");
    a.takeDamage(10);
    a.beRepaired(2);
    c.takeDamage(30);
    b.guardGate();
    std::cout << std::endl;
    return (0);
}