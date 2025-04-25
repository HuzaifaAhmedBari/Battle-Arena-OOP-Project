#include "Berserker.hpp"

void Berserker::decideAction(Character* target) {
    if (specialUsesLeft > 0) {
        useSpecial(target);
    } else {
        attack(target);
    }
}
