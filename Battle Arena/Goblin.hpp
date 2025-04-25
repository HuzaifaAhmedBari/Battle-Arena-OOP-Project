#pragma once

#include "Enemy.hpp"

class Goblin : public Enemy {
	private:

	public:
		Goblin() : Enemy("Goblin", 50, 10) {}
		Goblin(string name, float health, float attackpower) : Enemy(name, health, attackpower) {}

};

