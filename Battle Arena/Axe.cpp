#include "Axe.hpp"
#include "Player_Character.hpp"

float Axe::attack(int py, int px, int ey, int ex, Direction look) {
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
