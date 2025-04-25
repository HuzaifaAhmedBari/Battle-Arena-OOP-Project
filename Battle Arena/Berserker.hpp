#pragma once

#include "Enemy.hpp"

class Berserker : public Enemy {
	private:

	public:
		Berserker() : Enemy("Berserker", 200, 40) {}
		Berserker(string name, float health, float attackpower) : Enemy(name, health, attackpower) {}

};

