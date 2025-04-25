#include "Sword.hpp"
#include "Player_Character.hpp"



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
    std::cout << name << " charges forward, slashing 3 tiles ahead!\n";
    target->takeDamage(damage * 1.1f);
    reduceSpecialUse();
}
