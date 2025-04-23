#include "Archer.hpp"

void Archer::attack(Character& opponent) {
    attackWithCurrentWeapon(&opponent);
}

void Archer::healing() {
    if (Character::gethealth() < 100.f) {
        Character::sethealth(Character::gethealth() + 10.f);
    }
    else {
        Character::sethealth(100.f);
    }
    std::cout << Character::getname() << " healed to " << Character::gethealth() << " health." << std::endl;
    std::cout << std::endl;
}

void Archer::movecharacter() {
    
}
