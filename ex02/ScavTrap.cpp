#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    this->name = "default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->energyPoints = other.energyPoints;
    this->hitPoints = other.hitPoints;
    this->attackDamage = other.attackDamage;
    this->name = other.name;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->name << " is out of energy" << std::endl;
        return ;
    }

    else if (this->hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
        return ;
    }

    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

