#pragma once
#include "Enemy.hpp"

class Berserker : public Enemy {
public:
    Berserker(std::string name = "Rageclaw")
        : Enemy(name, "Berserker", "Bara Hammer", 120.f, 25.f) {}

    void decideAction(Character* target) override;
};
