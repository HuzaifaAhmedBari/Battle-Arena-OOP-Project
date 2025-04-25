#pragma once
#include "Enemy.hpp"

class Goblin : public Enemy {
public:
    Goblin(std::string name = "Nib")
        : Enemy(name, "Goblin", "Rusty Dagger", 60.f, 10.f) {}

    void decideAction(Character* target) override;
};
