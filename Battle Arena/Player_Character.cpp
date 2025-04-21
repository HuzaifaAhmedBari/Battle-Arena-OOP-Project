#include "Player_Character.hpp"

#include <iostream>
using namespace std;

string Character::getname() const {
	return name;
}
float Character::getdamage() const {
	return damage;
}
float Character::gethealth() const {
	return health;
}