#include "ScavTrap.hpp"

int main() {
    // Create an instance of ClapTrap with no name
    ScavTrap unnamedRobot;

    std::cout << unnamedRobot.getName() <<std::endl;
    std::cout << unnamedRobot.getEnergyPoints() <<std::endl;
    std::cout << "health: " <<unnamedRobot.getHitPoints() <<std::endl;
    std::cout << unnamedRobot.getAttackDamagePoints() <<std::endl;
    
    unnamedRobot.attack("target");
    unnamedRobot.takeDamage(5);
    std::cout << "health: " <<unnamedRobot.getHitPoints() <<std::endl;
    unnamedRobot.beRepaired(5);
    std::cout << "health: " <<unnamedRobot.getHitPoints() <<std::endl;
    unnamedRobot.guardGate();
    // End the program
    return 0;
}