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
    if (!Start_BackGround_texture.loadFromFile("StartBackGround.png"))
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

    Texture Mage_texture;
    if (!Mage_texture.loadFromFile("Mage.jpeg"))
    {
        cout << "Error Loading the Sprite" << endl;
    }
    Sprite Mage_sprite(Mage_texture);
    scaleX = 250.f / Mage_texture.getSize().x;
    scaleY = 250.f / Mage_texture.getSize().y;
    Mage_sprite.setScale({ scaleX,scaleY });
    Mage_sprite.setPosition({ 650,300 });

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
            select_character_screen(window, currentstate, currentcharacter, currentweapon, Select_Character_sprite, Mage_sprite);
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
    style.FrameRounding = 30.0f;
    style.FramePadding = ImVec2(15, 10);
    style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.f, 0.f, 0.f, 0.1f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.f, 0.f, 0.f, 0.2f);

    float buttonWidth = window.getSize().x * 0.3f;
    float buttonHeight = window.getSize().y * 0.159f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.485f - buttonWidth / 2, window.getSize().y * 0.885f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));


    ImGui::Begin("START", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentstate = SelectCharacter;
    }

    ImGui::End();
}

void Game::select_character_screen(RenderWindow &window, GameState &currentstate, CharacterState &currentcharacter, WeaponState &currentweapon, Sprite &Select_Character_sprite, Sprite &Mage_sprite) {
    window.draw(Select_Character_sprite);

	float buttonWidth, buttonHeight;

    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 25.0f;
    style.FramePadding = ImVec2(15, 10);
    style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.f, 0.f, 0.f, 0.1f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.f, 0.f, 0.f, 0.2f);


    buttonWidth = window.getSize().x * 0.319f;
    buttonHeight = window.getSize().y * 0.14f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.5762f - buttonWidth / 2, window.getSize().y * 0.8652f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("SELECT_CHARACTER", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentstate = SelectWeapon;
    }

    ImGui::End();


    buttonWidth = window.getSize().x * 0.227f;
    buttonHeight = window.getSize().y * 0.13f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.287f - buttonWidth / 2, window.getSize().y * 0.46f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("ARCHER", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentcharacter = Archer;
		currentweapon = ShortBow;
    }

    ImGui::End();


    buttonWidth = window.getSize().x * 0.227f;
    buttonHeight = window.getSize().y * 0.125f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.287f - buttonWidth / 2, window.getSize().y * 0.6f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("Warrior", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentcharacter = Warrior;
		currentweapon = Sword;
    }

    ImGui::End();

    buttonWidth = window.getSize().x * 0.227f;
    buttonHeight = window.getSize().y * 0.125f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.287f - buttonWidth / 2, window.getSize().y * 0.747f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("Mage", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentcharacter = Mage;
		currentweapon = FireStaff;
    }

    if (currentcharacter == Mage)
    {
        window.draw(Mage_sprite);

    }

    ImGui::End();
}

void Game::select_weapon_screen(RenderWindow &window, GameState &currentstate, CharacterState &currentcharacter, WeaponState &currentweapon, Sprite &Select_Weapon_sprite) {


}
