#include "FireStaff.hpp"
#include "Status_Effect.hpp"
#include "Player_Character.hpp"

void FireStaff::attack() {

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
