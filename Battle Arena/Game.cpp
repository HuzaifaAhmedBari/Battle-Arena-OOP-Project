#include "Game.hpp"

void Game::run() {
    float scaleX, scaleY;

    RenderWindow window(sf::VideoMode({ 1200, 800 }), "BATTLE ARENA");
    window.setFramerateLimit(60);

    if (!ImGui::SFML::Init(window))
    {
        cout << "Unexpected Error In Creating Window";
        return;
    }

    Texture Start_BackGround_texture;
    if (!Start_BackGround_texture.loadFromFile("StartBackGround.jpg"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Start_BackGround_sprite(Start_BackGround_texture);
    scaleX = 1200.f / Start_BackGround_texture.getSize().x;
    scaleY = 800.f / Start_BackGround_texture.getSize().y;
    Start_BackGround_sprite.setScale({ scaleX, scaleY });

    Texture Select_Character_texture;
    if (!Select_Character_texture.loadFromFile("Select_Character.jpg"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Select_Character_sprite(Select_Character_texture);
    scaleX = 1200.f / Select_Character_texture.getSize().x;
    scaleY = 800.f / Select_Character_texture.getSize().y;
    Select_Character_sprite.setScale({ scaleX, scaleY });

    Texture Archer_texture;
    if (!Archer_texture.loadFromFile("Archer.png"))
    {
        cout << "Error Loading the Sprite" << endl;
    }
    Sprite Archer_sprite(Archer_texture);
    scaleX = 250.f / Archer_texture.getSize().x;
    scaleY = 350.f / Archer_texture.getSize().y;
    Archer_sprite.setScale({ scaleX,scaleY });
    Archer_sprite.setPosition({ 650,250 });

    Texture Mage_texture;
    if (!Mage_texture.loadFromFile("Mage.png"))
    {
        cout << "Error Loading the Sprite" << endl;
    }
    Sprite Mage_sprite(Mage_texture);
    scaleX = 250.f / Mage_texture.getSize().x;
    scaleY = 350.f / Mage_texture.getSize().y;
    Mage_sprite.setScale({ scaleX,scaleY });
    Mage_sprite.setPosition({ 650,250 });

    Texture Warrior_texture;
    if (!Warrior_texture.loadFromFile("Warrior.png"))
    {
        cout << "Error Loading the Sprite" << endl;
    }
    Sprite Warrior_sprite(Warrior_texture);
    scaleX = 250.f / Warrior_texture.getSize().x;
    scaleY = 350.f / Warrior_texture.getSize().y;
    Warrior_sprite.setScale({ scaleX,scaleY });
    Warrior_sprite.setPosition({ 650,250 });

    /*Texture Select_Weapon_texture;
	if (!Select_Weapon_texture.loadFromFile("Select_Weapon.jpg"))
	{
		cout << "Error Loading the Background" << endl;
	}
	Sprite Select_Weapon_sprite(Select_Weapon_texture);
	scaleX = 1200.f / Select_Weapon_texture.getSize().x;
	scaleY = 800.f / Select_Weapon_texture.getSize().y;
	Select_Weapon_sprite.setScale({ scaleX, scaleY });*/

    GameState currentstate = GameState::Start;
	CharacterState currentcharacter = CharacterState::Archer;
	WeaponState currentweapon = WeaponState::Sword;

    Clock deltaClock;
    while (window.isOpen()) {
        while (const auto event = window.pollEvent()) {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());
        window.clear();

        if (currentstate == Start)
        {
            start_screen(window,currentstate,Start_BackGround_sprite);
        }
        else if (currentstate == SelectCharacter)
        {
            select_character_screen(window, currentstate, currentcharacter, currentweapon, Select_Character_sprite, Archer_sprite, Warrior_sprite, Mage_sprite);
        }
        else if (currentstate == SelectWeapon)
        {
            //select_weapon_screen(window, currentstate, currentcharacter, currentweapon, Select_Weapon_sprite);
            window.close();
        }

        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}

void Game::start_screen(RenderWindow &window,GameState &currentstate, Sprite &Start_BackGround_sprite) {
    window.draw(Start_BackGround_sprite);

    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 20.0f;
    style.FramePadding = ImVec2(15, 10);
    style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.1f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.f, 0.f, 0.f, 0.2f);

    float buttonWidth = window.getSize().x * 0.255f;
    float buttonHeight = window.getSize().y * 0.125f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.495f - buttonWidth / 2, window.getSize().y * 0.47f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));


    ImGui::Begin("START", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentstate = SelectCharacter;
    }

    ImGui::End();
}

void Game::select_character_screen(RenderWindow &window, GameState &currentstate, CharacterState &currentcharacter, WeaponState &currentweapon, Sprite &Select_Character_sprite, Sprite &Archer_sprite, Sprite &Warrior_sprite, Sprite &Mage_sprite) {
    window.draw(Select_Character_sprite);

	float buttonWidth, buttonHeight;

    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 25.0f;
    style.FramePadding = ImVec2(15, 10);
    style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.f, 0.f, 0.f, 0.1f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.f, 0.f, 0.f, 0.2f);


    buttonWidth = window.getSize().x * 0.325f;
    buttonHeight = window.getSize().y * 0.134f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.615f - buttonWidth / 2, window.getSize().y * 0.835f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("SELECT_CHARACTER", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentstate = SelectWeapon;
    }

    ImGui::End();


    buttonWidth = window.getSize().x * 0.255f;
    buttonHeight = window.getSize().y * 0.125f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.308f - buttonWidth / 2, window.getSize().y * 0.42f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("ARCHER", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentcharacter = Archer;
		currentweapon = ShortBow;
    }

    ImGui::End();


    buttonWidth = window.getSize().x * 0.258f;
    buttonHeight = window.getSize().y * 0.123f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.308f - buttonWidth / 2, window.getSize().y * 0.565f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("Warrior", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentcharacter = Warrior;
		currentweapon = Sword;
    }

    ImGui::End();

    buttonWidth = window.getSize().x * 0.25f;
    buttonHeight = window.getSize().y * 0.12f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.311f - buttonWidth / 2, window.getSize().y * 0.702f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("Mage", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentcharacter = Mage;
		currentweapon = FireStaff;
    }

    if (currentcharacter == Archer)
    {
        window.draw(Archer_sprite);
    }
    else if (currentcharacter == Warrior)
    {
		window.draw(Warrior_sprite);
    }
    else if (currentcharacter == Mage)
    {
        window.draw(Mage_sprite);

    }

    ImGui::End();
}

void Game::select_weapon_screen(RenderWindow &window, GameState &currentstate, CharacterState &currentcharacter, WeaponState &currentweapon, Sprite &Select_Weapon_sprite) {


}
