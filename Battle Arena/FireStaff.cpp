#include "FireStaff.hpp"
#include "Status_Effect.hpp"
#include "Player_Character.hpp"

float FireStaff::attack(int py, int px, int ey, int ex, Direction look) {
    if (look == Direction::Up && px == ex && py - ey <= 3 && py - ey >= 0)
        return damage;
    else if (look == Direction::Down && px == ex && ey - py <= 3 && ey - py >= 0)
        return damage;
    else if (look == Direction::Left && py == ey && px - ex <= 3 && px - ex >= 0)
        return damage;
    else if (look == Direction::Right && py == ey && ex - px <= 3 && ex - px >= 0)
        return damage;
    return 0.f;
}

void FireStaff::displayStats() const {
    Weapon::displayStats();
}
void FireStaff::useSpecialMove(Character* target) {
    if (!canUseSpecial()) {
        std::cout << "Special move unavailable or no uses left.\n";
        return;
    }

    std::cout << name << " breathes fire, applying burn to 3 tiles!\n";
    target->applyStatus(StatusEffect::Burn, 3);

    reduceSpecialUse();
}
