#pragma once

#include "Enemy.hpp"

class Witch : public Enemy {
	private:

	public:
		Witch() : Enemy("Witch", 100, 25) {}
		Witch(string name, float health, float attackpower) : Enemy(name, health, attackpower) {}


};

