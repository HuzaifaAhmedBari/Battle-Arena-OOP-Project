#include "ShortBow.hpp"



void ShortBow::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Rapid Fire" << endl;
    // cout << "Description: A quick succession of arrows that deal damage to multiple targets." << endl;
}
void ShortBow::useSpecialMove(Character* target) {
    if (!canUseSpecial()) {
        std::cout << "Special move unavailable or no uses left.\n";
        return;
    }
    
    std::cout << name << " uses its special power!\n";
    // ... apply effect ...
    reduceSpecialUse();
    // cout << "Using Rapid Fire on " << target->getname() << "!" << endl;
    // Implement the logic for the special move here
    // For example, you could deal damage to the target
    // target->takeDamage(damage * 2); // Example: double damage for special move
}
