#include "ShortBow.hpp"
#include "Status_Effect.hpp"
#include "Player_Character.hpp"

void ShortBow::attack() {

}
void ShortBow::displayStats() const {
    Weapon::displayStats();
    // cout << "Special Move: Rapid Fire" << endl;
    // cout << "Description: A quick succession of arrows that deal damage to multiple targets." << endl;
}
// void ShortBow::useSpecialMove(Character* target) {
//     if (!canUseSpecial()) {
//         std::cout << "Special move unavailable or no uses left.\n";
//         return;
//     }
    
//     std::cout << name << " uses its special power!\n";
//     // ... apply effect ...
//     reduceSpecialUse();
//     // cout << "Using Rapid Fire on " << target->getname() << "!" << endl;
//     // Implement the logic for the special move here
//     // For example, you could deal damage to the target
//     // target->takeDamage(damage * 2); // Example: double damage for special move
// }
void ShortBow::useSpecialMove(Character* target) {
    if (!canUseSpecial()) return;
    int random = rand() % 4;

    switch (random) {
        case 0: target->applyStatus(StatusEffect::Burn, 2); break;
        case 1: target->applyStatus(StatusEffect::Frozen, 2); break;
        case 2: target->applyStatus(StatusEffect::Poison, 3); break;
        case 3: target->applyStatus(StatusEffect::Confused, 2); break;
        default: std::cout << "No status effect applied.\n"; break;
    }

    std::cout << name << " fires a Mystery Arrow with a random status effect!\n";
    reduceSpecialUse();
}
