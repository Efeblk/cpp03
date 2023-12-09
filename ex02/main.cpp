#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Create an instance of ClapTrap named "Clappy"
    ClapTrap clap("Clappy");

    // Have "Clappy" attack a target named "Target1"
    clap.attack("Target1");

    // Have "ClapTrap" take 50 points of damage
    clap.takeDamage(50);

    // Repair "ClapTrap" by 20 points
    clap.beRepaired(20);

    // Create an instance of ScavTrap named "Scavvy"
    ScavTrap scav("Scavvy");

    // Have "Scavvy" attack a target named "Target2"
    scav.attack("Target2");

    // Have "ScavTrap" take 30 points of damage
    scav.takeDamage(30);

    // Repair "ScavTrap" by 10 points
    scav.beRepaired(10);

    // Have "ScavTrap" guard the gate
    scav.guardGate();

    // Create an instance of FragTrap named "Fraggy"
    FragTrap frag("Fraggy");

    // Have "Fraggy" attack a target named "Target3"
    frag.attack("Target3");

    // Have "FragTrap" take 40 points of damage
    frag.takeDamage(40);

    // Repair "FragTrap" by 15 points
    frag.beRepaired(15);

    // Have "FragTrap" give high fives
    frag.highFivesGuys();

    // End the program
    return 0;
}