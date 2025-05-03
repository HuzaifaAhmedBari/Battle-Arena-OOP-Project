#include "Goblin.hpp"

void Goblin::decideAction(Character* target) {
    /*if (health < 25) {
        heal();
    } else {
        attack(target);
    }*/
}

float Goblin::attack(int py, int px, int ey, int ex) {
    if (py == ey && abs(px - ex) <= 1)
        return damage;
	else if (px == ex && abs(py - ey) <= 1)
		return damage;
    return 0.f;
}