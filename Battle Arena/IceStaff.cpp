#include "IceStaff.hpp"



void IceStaff::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Frostbite" << endl;
    // cout << "Description: A chilling attack that slows down the target." << endl;
}
void IceStaff::useSpecialMove(Character* target) {
    if (!canUseSpecial()) {
        std::cout << "Special move unavailable or no uses left.\n";
        return;
    }
    
    std::cout << name << " uses its special power!\n";
    // ... apply effect ...
    reduceSpecialUse();
    // cout << "Using Frostbite on " << target->getname() << "!" << endl;
    // Implement the logic for the special move here
    // For example, you could deal damage to the target
    // target->takeDamage(damage * 2); // Example: double damage for special move
}
