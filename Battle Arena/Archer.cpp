#include "Archer.hpp"
 
void Archer::attack(Character& opponent) {
    
}
void Archer::attackWithSpecialMove(Character& opponent) {
    if (weapon && weapon->isSpecialUnlocked()) {
        weapon->useSpecialMove(&opponent);
    }
    else {
        std::cout << "No special move available for " << getname() << ".\n\n";
    }
}

void Archer::healing() {
    if (healsUsed >= level) {
        std::cout << getname() << " has used all healing chances for level " << level << ".\n\n";
        return;
    }

    float healAmount = 10.f;
    float currentHealth = gethealth();

    if (currentHealth < 100.f) {
        float newHealth = std::min(currentHealth + healAmount, 100.f);
        sethealth(newHealth);
        healsUsed++;

        std::cout << getname() << " healed to " << gethealth()
                  << " health. (" << healsUsed << "/" << level << " heals used)\n\n";
    } else {
        std::cout << getname() << " is already at full health.\n\n";
    }
}


void Archer::movecharacter() {
    
}
