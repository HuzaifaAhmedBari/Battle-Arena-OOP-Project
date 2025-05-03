#pragma once
#include "Enemy.hpp"

class Goblin : public Enemy {
    public:
        Goblin(std::string name = "Nib") : Enemy(name, "Goblin", "Rusty Dagger", 80.f, 20.f) {}

        float attack(int py, int px, int ey, int ex);
        void decideAction(Character* target) override;
};
