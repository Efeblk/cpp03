#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    name = other.name;
    std::cout << name << " is copied\n";
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
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

