#include "Goblin.hpp"

void Goblin::decideAction(Character* target) {
    if (health < 25) {
        heal();
    } else {
        attack(target);
    }
}
