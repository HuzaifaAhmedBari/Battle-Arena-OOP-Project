#include "Axe.hpp"
#include "Player_Character.hpp"

void Axe::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Whirlwind Attack" << endl;
    // cout << "Description: A powerful spinning attack that deals damage to all enemies in range." << endl;
}

void Axe::useSpecialMove(Character* target) {
    if (!canUseSpecial()) {
        std::cout << "Special move unavailable or no uses left.\n";
        return;
    }
    std::cout << name << " spins and damages enemies in all directions!\n";
    target->takeDamage(damage * 0.75f);
    
    reduceSpecialUse();
}
