#include "Enemy.hpp"

string Enemy::getname() const {
	return name;
}

float Enemy::gethealth() const {
	return health;
}

float Enemy::getattackpower() const {
	return attackpower;
}

Enemy::~Enemy() {}