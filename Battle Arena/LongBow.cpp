#include "LongBow.hpp"



void LongBow::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Piercing Arrow" << endl;
    // cout << "Description: A powerful shot that pierces through armor." << endl;
}
void LongBow::useSpecialMove(Character* target) {
    // cout << "Using Piercing Arrow on " << target->getname() << "!" << endl;
    // Implement the logic for the special move here
    // For example, you could deal damage to the target
    // target->takeDamage(damage * 2); // Example: double damage for special move
}
