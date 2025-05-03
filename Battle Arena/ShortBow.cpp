#include "ShortBow.hpp"
#include "Status_Effect.hpp"
#include "Player_Character.hpp"

float ShortBow::attack(int py, int px, int ey, int ex, Direction look) {
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
