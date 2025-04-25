#include "FireStaff.hpp"


void FireStaff::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Fireball" << endl;
    // cout << "Description: A powerful fire attack that deals damage to a single target." << endl;
}
void FireStaff::useSpecialMove(Character* target) {
    if (!canUseSpecial()) {
        std::cout << "Special move unavailable or no uses left.\n";
        return;
    }
    
    std::cout << name << " uses its special power!\n";
    // ... apply effect ...
    reduceSpecialUse();
    //cout << "Using Fireball on " << target->getname() << "!" << endl;
    // Implement the logic for the special move here
    // For example, you could deal damage to the target
    // target->takeDamage(damage * 2); // Example: double damage for special move
}
