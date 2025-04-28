#include "Enemy.hpp"

void Enemy::attack(Character* target) {
    std::cout << name << " attacks with " << weaponName << " for " << damage << " damage.\n";
    target->takeDamage(damage);
}

void Enemy::useSpecial(Character* target) {
    if (specialUsesLeft <= 0) {
        std::cout << name << " tried to use a special move, but has none left.\n";
        return;
    }

    std::cout << name << " uses a special move with " << weaponName << "! It's devastating!\n";
    target->takeDamage(damage * 1.5); // 1.5x damage for special
    specialUsesLeft--;
}

void Enemy::heal() {
    if (healsUsed >= level) {
        std::cout << name << " has used all of their heals!\n";
        return;
    }

    float healAmount = 15;
    health += healAmount;
    healsUsed++;

    cout << name << " heals for " << healAmount << " HP. (" << healsUsed << "/" << level << " heals used)\n";
}


void Enemy::move() {
    cout << name << " shifts its position on the battlefield.\n";
}

void Enemy::displayStats() const {
    cout << "=== Enemy: " << name << " ===\n";
    cout << "Type: " << type << "\nHealth: " << health << "\nWeapon: " << weaponName << "\nSpecial Moves Left: " << specialUsesLeft << "\n";
}

bool Enemy::isAlive() const {
    return health > 0;
}

