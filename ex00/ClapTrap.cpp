#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default")
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
        this->energyPoints -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
    }
}

