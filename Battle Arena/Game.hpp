#pragma once

#ifndef Game_HPP
#define Game_HPP

#include "Player_Character.hpp"
#include "Weapon.hpp"
#include "Archer.hpp"
#include "Warrior.hpp"
#include "Mage.hpp"
#include "ShortBow.hpp"
#include "LongBow.hpp"
#include "Sword.hpp"
#include "Axe.hpp"
#include "IceStaff.hpp"
#include "FireStaff.hpp"

#include "imgui.h"
#include "imgui-SFML.h"

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

enum GameState {
    Start,
    SelectCharacter,
    SelectWeapon
};
enum CharacterState {
	Warrior_character,
	Mage_character,
	Archer_character
};
enum WeaponState {
    Sword_weapon,
    Axe_weapon,
    FireStaff_weapon,
    IceStaff_weapon,
    ShortBow_weapon,
    LongBow_weapon
};
enum WeaponType {
    Weapon1,
    Weapon2
};

class Game
{
    public:

        void run();

        void select_Menus(GameState &currentstate, CharacterState &currentcharacter, WeaponState &currentweapon);
        void start_screen(RenderWindow &window,GameState &currentstate, Sprite &Start_BackGround_sprite);
        void select_character_screen(RenderWindow &window, GameState &currentstate, CharacterState &currrentcharacter, WeaponState &currenteweapon, Sprite &Select_Character_sprite, Sprite &Archer_sprite, Sprite &Warrior_sprite, Sprite &Mage_sprite);
        void select_weapon_screen(RenderWindow &window, GameState &currentstate, CharacterState &currentcharacter, WeaponState &currentweapon, Sprite &Select_Weapon_Archer_sprite, Sprite &Select_Weapon_Warrior_sprite, Sprite &Select_Weapon_Mage_sprite, Sprite &ShortBow_sprite, Sprite &LongBow_sprite, Sprite &Sword_sprite, Sprite &Axe_sprite, Sprite &IceStaff_sprite, Sprite &FireStaff_sprite);
};

#endif