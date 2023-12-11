#include "FragTrap.hpp"

int main() {
    // Create an instance of ClapTrap with no name
    FragTrap unnamedRobot;

    std::cout << unnamedRobot.getName() <<std::endl;
    std::cout << unnamedRobot.getEnergyPoints() <<std::endl;
    std::cout << "health: " <<unnamedRobot.getHitPoints() <<std::endl;
    std::cout << unnamedRobot.getAttackDamagePoints() <<std::endl;
    
    unnamedRobot.attack("target");
    unnamedRobot.takeDamage(5);
    std::cout << "health: " <<unnamedRobot.getHitPoints() <<std::endl;
    unnamedRobot.beRepaired(5);
    std::cout << "health: " <<unnamedRobot.getHitPoints() <<std::endl;
    unnamedRobot.highFivesGuys();
    // End the program
    return 0;
}