#include "Berserker.hpp"

void Berserker::decideAction(Character* target) {
    /*if (specialUsesLeft > 0) {
        useSpecial(target);
    } else {
        attack(target);
    }*/
}

float Berserker::attack(int py, int px, int ey, int ex) {
    if (py == ey && abs(px - ex) <= 2)
        return damage;
    else if (px == ex && abs(py - ey) <= 2)
        return damage;
    return 0.f;
    return 0.f;
}
