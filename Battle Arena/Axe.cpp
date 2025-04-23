#include "Axe.hpp"


void Axe::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Whirlwind Attack" << endl;
    // cout << "Description: A powerful spinning attack that deals damage to all enemies in range." << endl;
}

void Axe::useSpecialMove(Character* target) {
    // cout << "Using Whirlwind Attack on " << target->getname() << "!" << endl;
    // Implement the logic for the special move here
    // For example, you could deal damage to the target
    // target->takeDamage(damage * 2); // Example: double damage for special move
}
