#include "Weapon.hpp"

void Weapon::attack() {

}
void Weapon::displayStats() const {
	cout << "Weapon Name: " << name << endl;
	cout << "Range: " << range << endl;
	cout << "Damage: " << damage << endl;
}
bool Weapon::isSpecialUnlocked() const {
    return specialUnlocked;
}

void Weapon::levelUpEffect(int playerLevel) {
    /*if (playerLevel == unlockLevel + 1) {
        damage += damageIncrement;
        std::cout << name << "'s damage increased to " << damage << "!\n";
    }
    if (playerLevel >= specialMoveUnlockLevel && !specialUnlocked) {
        specialUnlocked = true;
        std::cout << name << "'s special move is now unlocked!\n";
    }*/
}
bool Weapon::canUseSpecial() const {
    return specialUnlocked && specialUsesLeft > 0;
}
void Weapon::reduceSpecialUse() {
    if (specialUsesLeft > 0) specialUsesLeft--;
}
string Weapon::getname() const {
	return name;
}
float Weapon::getrange() const {
	return range;
}
float Weapon::getdamage() const {
	return damage;
}
