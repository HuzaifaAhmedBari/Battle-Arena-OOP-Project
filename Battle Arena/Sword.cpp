#include "Sword.hpp"



void Sword::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Sword Slash" << endl;
    // cout << "Description: A powerful slash that deals extra damage." << endl;
}
void Sword::useSpecialMove(Character* target) {
    if (!canUseSpecial()) {
        std::cout << "Special move unavailable or no uses left.\n";
        return;
    }
    
    std::cout << name << " uses its special power!\n";
    // ... apply effect ...
    reduceSpecialUse();
    // cout << "Using Sword Slash on " << target->getname() << "!" << endl;
    // Implement the logic for the special move here
    // For example, you could deal damage to the target
    // target->takeDamage(damage * 2); // Example: double damage for special move
}
