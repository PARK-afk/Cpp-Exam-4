#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("A");
    ClapTrap b("B");

    std::cout << std::endl;
    a.attack("B");
    b.takeDamage(3);
    b.attack("A");
    a.takeDamage(5);
    std::cout << std::endl;

    a.beRepaired(3);
    b.attack("A");
    a.takeDamage(20);
    a.beRepaired(10);
    std::cout << std::endl;

    b.attack("A");
    a.takeDamage(20);
    a.beRepaired(10);
    return (0);
}