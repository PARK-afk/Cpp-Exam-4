#include "ScavTrap.hpp"

int main(void)
{
   ScavTrap a("A");
   ScavTrap b("B");
   std::cout << std::endl;

    a.attack("B");
    b.takeDamage(20);
    b.attack("A");
    a.takeDamage(200);
    a.beRepaired(10);
    b.guardGate();
    std::cout << std::endl;
    return (0);
}