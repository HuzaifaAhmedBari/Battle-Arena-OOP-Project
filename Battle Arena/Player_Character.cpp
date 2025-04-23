#include "Player_Character.hpp"

#include <iostream>
using namespace std;

bool Character::isAlive() const{
	return health > 0;
}
void Character::displayStats() const {
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Damage: " << damage << endl;
}
string Character::getname() {
	return name;
}
float Character::getdamage() {
	return damage;
}
float Character::gethealth() {
	return health;
}
