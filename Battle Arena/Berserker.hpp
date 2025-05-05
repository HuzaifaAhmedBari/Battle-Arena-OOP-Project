#pragma once
#include "Enemy.hpp"

class Berserker : public Enemy {
    public:
        Berserker(std::string name = "Rageclaw") : Enemy(name, "Berserker", "Bara Hammer", 110.f, 35.f) {}

        float attack(int py, int px, int ey, int ex);
        void decideAction(Character* target) override;
};
