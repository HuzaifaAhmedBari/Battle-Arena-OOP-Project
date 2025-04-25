#include "Witch.hpp"
#include <cstdlib>

void Witch::decideAction(Character* target) {
    if (health < 30) {
        heal();
    } else if (specialUsesLeft > 0) {
        useSpecial(target);
    } else {
        attack(target);
    }
}
