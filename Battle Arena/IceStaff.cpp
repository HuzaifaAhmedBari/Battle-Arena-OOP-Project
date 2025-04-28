#include "IceStaff.hpp"
#include "Status_Effect.hpp"
#include "Player_Character.hpp"

void IceStaff::attack() {

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
