#include "LongBow.hpp"
#include "Player_Character.hpp"

float LongBow::attack(int py, int px, int ey, int ex, Direction look) {
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