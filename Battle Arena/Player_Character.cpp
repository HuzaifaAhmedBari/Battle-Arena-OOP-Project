#include "Player_Character.hpp"

#include <iostream>
using namespace std;

string Character::getname() {
	return name;
}
float Character::getdamage() {
	return damage;
}
float Character::gethealth() {
	return health;
}