#include "Mage.hpp"

void Mage::attack(Character& opponent) {
    attackWithCurrentWeapon(&opponent);
}

void Mage::healing() {
    if (Character::gethealth() < 100.f) {
        Character::sethealth(Character::gethealth() + 10.f);
    }
    else {
        Character::sethealth(100.f);
    }
    std::cout << Character::getname() << " healed to " << Character::gethealth() << " health." << std::endl;
    std::cout << std::endl;
}

void Mage::movecharacter() {
    

}
