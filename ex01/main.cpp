#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Create an instance of ClapTrap named "Clappy"
    ClapTrap clap("Clappy");

    // Have "Clappy" attack a target named "Target1"
    clap.attack("Target1");

    // Have "Clappy" take 50 points of damage
    clap.takeDamage(50);

    // Repair "Clappy" by 20 points
    clap.beRepaired(20);

    // Create an instance of ScavTrap named "Scavvy"
    ScavTrap scav("Scavvy");

    // Have "Scavvy" attack a target named "Target2"
    scav.attack("Target2");

    // Have "Scavvy" take 30 points of damage
    scav.takeDamage(30);

    // Repair "Scavvy" by 10 points
    scav.beRepaired(10);

    // Have "Scavvy" guard the gate
    scav.guardGate();

    // End the program
    return 0;
}