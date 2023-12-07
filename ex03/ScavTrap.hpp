#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    ScavTrap();
public:
    ScavTrap(std::string name);
    void guardGate();
    ~ScavTrap();
};
