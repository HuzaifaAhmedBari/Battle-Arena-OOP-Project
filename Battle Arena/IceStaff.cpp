#include "IceStaff.hpp"
#include "Status_Effect.hpp"
#include "Player_Character.hpp"

float IceStaff::attack(int py, int px, int ey, int ex, Direction look) {
    if (look == Direction::Up && px == ex && py - ey <= 4 && py - ey >= 0)
        return damage;
    else if (look == Direction::Down && px == ex && ey - py <= 4 && ey - py >= 0)
        return damage;
    else if (look == Direction::Left && py == ey && px - ex <= 4 && px - ex >= 0)
        return damage;
    else if (look == Direction::Right && py == ey && ex - px <= 4 && ex - px >= 0)
        return damage;
    return 0.f;
}

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
    
    std::cout << name << " impales 3 enemies with ice and makes them vulnerable!\n";
    target->applyStatus(StatusEffect::Vulnerable, 2);
    reduceSpecialUse();
}
