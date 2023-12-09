#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ScavTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "a fragtrap spawned" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ScavTrap(other)
{
    std::cout << "a fragtrap spawned" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    ScavTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "fragtap destroyed" << std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "high five !" << std::endl;
}
