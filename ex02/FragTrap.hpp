#include "ScavTrap.hpp"
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ScavTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif