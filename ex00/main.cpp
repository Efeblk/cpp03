#include "ClapTrap.hpp"

int main() {
    // Create an instance of ClapTrap with no name
    ClapTrap unnamedRobot;

    // Create an instance of ClapTrap named "Clappy"
    ClapTrap namedRobot("Clappy");

    // Have "Clappy" attack a target named "Target1"
    namedRobot.attack("Target1");

    // Have unnamed robot attack a target named "Target2"
    unnamedRobot.attack("Target2");

    // Have "Clappy" take 50 points of damage
    namedRobot.takeDamage(50);

    // Have unnamed robot take 30 points of damage
    unnamedRobot.takeDamage(30);

    // Repair "Clappy" by 20 points
    namedRobot.beRepaired(20);

    // Repair unnamed robot by 10 points
    unnamedRobot.beRepaired(10);

    // End the program
    return 0;
}