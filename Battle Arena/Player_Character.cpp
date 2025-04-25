#include "Player_Character.hpp"
#include "Weapon.hpp"
#include "Axe.hpp"
#include "ShortBow.hpp"
#include "IceStaff.hpp"


bool Character::isAlive() const {
	return health > 0;
}
void Character::displayWeaponOptions() const {
    std::cout << "\nAvailable Weapons:\n";
    if (weapon1) {
        std::cout << "1. " << weapon1->getname();
        if (weapon1->isSpecialUnlocked()) std::cout << " (Special Ready)";
        std::cout << "\n";
    }
    if (weapon2) {
        std::cout << "2. " << weapon2->getname();
        if (weapon2->isSpecialUnlocked()) std::cout << " (Special Ready)";
        std::cout << "\n";
    }
}
void Character::attackWithCurrentWeapon(Character* target) {
    if (!currentWeapon) {
        std::cout << "No weapon equipped! Cannot attack.\n";
        return;
    }

    float dmg = currentWeapon->getdamage();
    std::cout << "Attacking with " << currentWeapon->getname() << " for " << dmg << " damage!\n";
    target->takeDamage(dmg);
}
void Character::useCurrentSpecialMove(Character* target) {
    if (!currentWeapon) {
        std::cout << "No weapon equipped.\n";
        return;
    }

    if (!currentWeapon->isSpecialUnlocked()) {
        std::cout << "Special move not unlocked yet for " << currentWeapon->getname() << ".\n";
        return;
    }

    currentWeapon->useSpecialMove(target);
}
void Character::unequipWeapon() {
    if (!currentWeapon) {
        std::cout << "No weapon is currently equipped.\n";
        return;
    }

    std::cout << "Unequipped " << currentWeapon->getname() << ".\n";
    currentWeapon = nullptr;
}
void Character::switchWeapon() {
    if (!weapon2) {
        std::cout << "You only have one weapon. No other weapon to switch to.\n";
        return;
    }

    if (!currentWeapon) {
        currentWeapon = weapon1;
        std::cout << "Equipped " << currentWeapon->getname() << ".\n";
        return;
    }

    if (currentWeapon == weapon1) {
        currentWeapon = weapon2;
    } else {
        currentWeapon = weapon1;
    }

    std::cout << "Switched to " << currentWeapon->getname() << ".\n";
}

void Character::chooseWeapon() {
    displayWeaponOptions();
    std::cout << "Choose weapon to equip (1 or 2), or 0 to unequip: ";
    int choice;
    std::cin >> choice;

    if (choice == 1 && weapon1 != nullptr) {
        currentWeapon = weapon1;
        std::cout << "Equipped " << currentWeapon->getname() << ".\n";
    } else if (choice == 2 && weapon2 != nullptr) {
        currentWeapon = weapon2;
        std::cout << "Equipped " << currentWeapon->getname() << ".\n";
    } else if (choice == 0) {
        currentWeapon = nullptr;
        std::cout << "No weapon equipped.\n";
    } else {
        std::cout << "Invalid choice or weapon not available.\n";
    }
}


void Character::displayStats() const { 
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Damage: " << damage << endl;
}
void Character::levelUp() {
    level++;
    std::cout << name << " leveled up to " << level << "!\n";
    updateWeapons();
}

void Character::updateWeapons() {
    if (weapon1) weapon1->levelUpEffect(level);

    // Unlock weapon2 at level 4
    if (level >= 4 && !weapon2) {
        if (type == "Warrior") {
            weapon2 = new Axe();
        } else if (type == "Mage") {
            weapon2 = new IceStaff();
        } else if (type == "Archer") {
            weapon2 = new ShortBow();
        }

        if (weapon2)
            std::cout << type << " unlocked second weapon: " << weapon2->getname() << "!\n";
    }

    if (weapon2) weapon2->levelUpEffect(level);


}
void Character::useWeapon1SpecialMove(Character* target) {
    if (!weapon1 || !weapon1->canUseSpecial()) {
        std::cout << "Weapon 1's special move is not available.\n";
        return;
    }

    weapon1->useSpecialMove(target);
}

void Character::useWeapon2SpecialMove(Character* target) {
    if (!weapon2 || !weapon2->canUseSpecial()) {
        std::cout << "Weapon 2's special move is not available.\n";
        return;
    }

    weapon2->useSpecialMove(target);
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

void Character::sethealth(float health) {
    this->health = health;
}

string Character::getType() const {
    return type;
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
