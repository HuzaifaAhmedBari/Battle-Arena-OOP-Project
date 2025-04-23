#include "Player_Character.hpp"

bool Character::isAlive() const {
	return health > 0;
}
void Character::displayStats() const {
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Damage: " << damage << endl;
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