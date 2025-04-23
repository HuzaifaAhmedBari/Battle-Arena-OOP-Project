#include "Warrior.hpp"
#include "Player_Character.hpp"

void Warrior::attack(Character& opponent) {
	attackWithCurrentWeapon(&opponent);
}

void Warrior::healing() {
    if (Character::gethealth() < 100.f) {
        Character::sethealth(Character::gethealth() + 10.f);
    }
    else {
        Character::sethealth(100.f);
    }
    std::cout << Character::getname() << " healed to " << Character::gethealth() << " health." << std::endl;
    std::cout << std::endl;
}


void Warrior::moveCharacter() {

}
