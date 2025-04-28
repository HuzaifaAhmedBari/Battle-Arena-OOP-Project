#include "LongBow.hpp"
#include "Player_Character.hpp"

void LongBow::attack() {
    
}

void LongBow::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Piercing Arrow" << endl;
    // cout << "Description: A powerful shot that pierces through armor." << endl;
}
void LongBow::useSpecialMove(Character* target) {
    if (!canUseSpecial()) {
        std::cout << "Special move unavailable or no uses left.\n";
        return;
    }
    std::cout << name << " shoots a piercing arrow through obstacles!\n";
    target->takeDamage(damage * 1.2f);
    reduceSpecialUse();
}