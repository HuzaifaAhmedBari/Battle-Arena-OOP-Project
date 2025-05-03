#include "Player_Character.hpp"
#include "Weapon.hpp"
#include "Axe.hpp"
#include "ShortBow.hpp"
#include "IceStaff.hpp"


bool Character::isAlive() const {
	return health > 0;
}
float Character::attack(int py, int px, int ey, int ex, Direction look) {
	return weapon->attack(py, px, ey, ex, look);
}
void Character::useCurrentSpecialMove(Character *target) {
    /*if (!currentWeapon) {
        std::cout << "No weapon equipped.\n";
        return;
    }

    if (!currentWeapon->isSpecialUnlocked()) {
        std::cout << "Special move not unlocked yet for " << currentWeapon->getname() << ".\n";
        return;
    }

    currentWeapon->useSpecialMove(target);*/
}

void Character::displayStats() const { 
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Damage: " << damage << endl;
}

void Character::useWeaponSpecialMove(Character* target) {
    if (!weapon || !weapon->canUseSpecial()) {
        std::cout << "Weapon 1's special move is not available.\n";
        return;
    }

    weapon->useSpecialMove(target);
}

void Character::applyStatus(StatusEffect effect, int duration) {
    status = effect;
    statusDuration = duration;
    std::cout << name << " is now affected by " << statusToString(status) << " for " << duration << " turns!\n";
}

void Character::updateStatus() {
    if (statusDuration > 0) {
        if (status == StatusEffect::Burn) {
            std::cout << name << " takes 5 burn damage!\n";
            health -= 5;
        } else if (status == StatusEffect::Frozen) {
            std::cout << name << " is frozen and cannot move!\n";
        } else if (status == StatusEffect::Vulnerable) {
            std::cout << name << " is vulnerable to damage!\n";
        } else if (status == StatusEffect::Poison) {
            std::cout << name << " takes 3 poison damage!\n";
            health -= 3;
        } else if (status == StatusEffect::Confused) {
            std::cout << name << " is confused and may attack itself!\n";
        } else if (status == StatusEffect::None) {
            std::cout << name << " is not affected by any status effects.\n";
        }

        statusDuration--;
        if (statusDuration == 0) {
            std::cout << name << " is no longer affected by " << statusToString(status) << ".\n";
            status = StatusEffect::None;
        }
    }
}
void Character::takeDamage(float damageTaken) {
    health = health - damageTaken;
}

void Character::useSpecialAbility() {

}

bool Character::movecharacter(Sprite &player_sprite, Direction &movement, vector<vector<char>> &grid, int &y, int &x) {
    if (movement == Up)
    {
        if (y == 0 || grid[y-1][x] == 'E')
            return true;
        player_sprite.move({ 0,-80 });
        grid[y][x] = ' ';
        y--;
        grid[y][x] = 'P';
        return false;
    }
    else if (movement == Down)
    {
        if (y == grid.size()-1 || grid[y + 1][x] == 'E')
            return true;
        player_sprite.move({ 0,80 }); 
        grid[y][x] = ' ';
        y++;
        grid[y][x] = 'P';
        return false;
    }
    else if (movement == Left)
    {
        if (x == 0 || grid[y][x - 1] == 'E')
            return true;
        player_sprite.move({ -90,0 });
        grid[y][x] = ' ';
        x--;
        grid[y][x] = 'P';
        return false;
    }
    else
    {
        if (x == grid[y].size()-1 || grid[y][x + 1] == 'E')
            return true;
        player_sprite.move({ 90,0 });
        grid[y][x] = ' ';
        x++;
        grid[y][x] = 'P';
        return false;
    }
}

void Character::healing() {

}

void Character::sethealth(float health) {
    this->health = health;
}

float Character::getmaxhealth() const {
	return maxhealth;
}
string Character::getname() const {
	return name;
}
float Character::getdamage() const {
	return damage;
}
float Character::gethealth() const {
	return health;
}
