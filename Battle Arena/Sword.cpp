#include "Sword.hpp"
#include "Player_Character.hpp"

float Sword::attack(int py, int px, int ey, int ex, Direction look) {
    if (look == Direction::Up && px == ex && py - ey <= 2 && py - ey >= 0)
        return damage;
    else if (look == Direction::Down && px == ex && ey - py <= 2 && ey - py >= 0)
        return damage;
    else if (look == Direction::Left && py == ey && px - ex <= 2 && px - ex >= 0)
        return damage;
    else if (look == Direction::Right && py == ey && ex - px <= 2 && ex - px >= 0)
        return damage;
    return 0.f;
}

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
