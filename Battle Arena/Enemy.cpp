#include "Enemy.hpp"
#include "Player_Character.hpp" // to interact with player

Enemy::Enemy(std::string name, std::string type, std::string weaponName, float health, float damage)
    : name(name), type(type), weaponName(weaponName), health(health), damage(damage) {}

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
    health += 20;
    std::cout << name << " heals and now has " << health << " HP.\n";
}

void Enemy::move() {
    std::cout << name << " shifts its position on the battlefield.\n";
}

void Enemy::displayStats() const {
    std::cout << "=== Enemy: " << name << " ===\n";
    std::cout << "Type: " << type << "\nHealth: " << health << "\nWeapon: " << weaponName
              << "\nSpecial Moves Left: " << specialUsesLeft << "\n";
}

bool Enemy::isAlive() const {
    return health > 0;
}

