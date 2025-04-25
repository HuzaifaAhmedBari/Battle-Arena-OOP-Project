#pragma once

#ifndef Game_HPP
#define Game_HPP

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
	Warrior,
	Mage,
	Archer
};
enum WeaponState {
	Sword,
    Axe,
	FireStaff,
    IceStaff,
	ShortBow,
    LongBow
};

class Game
{
    public:
        void run();
        void start_screen(RenderWindow &window,GameState &currentstate, Sprite &Start_BackGround_sprite);
        void select_character_screen(RenderWindow &window, GameState &currentstate, CharacterState &currrentcharacter, Sprite &Select_Character_sprite);
        void select_weapon_screen();
};

#endif
