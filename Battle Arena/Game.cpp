#include "Game.hpp"

void Game::run() {

    float scaleX, scaleY;

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

    Texture Select_Weapon_Archer_texture;
    if (!Select_Weapon_Archer_texture.loadFromFile("Select_Weapon_Archer.jpg"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Select_Weapon_Archer_sprite(Select_Weapon_Archer_texture);
    scaleX = 1200.f / Select_Weapon_Archer_texture.getSize().x;
    scaleY = 800.f / Select_Weapon_Archer_texture.getSize().y;
    Select_Weapon_Archer_sprite.setScale({ scaleX, scaleY });

    Texture Select_Weapon_Warrior_texture;
    if (!Select_Weapon_Warrior_texture.loadFromFile("Select_Weapon_Warrior.jpg"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Select_Weapon_Warrior_sprite(Select_Weapon_Warrior_texture);
    scaleX = 1200.f / Select_Weapon_Warrior_texture.getSize().x;
    scaleY = 800.f / Select_Weapon_Warrior_texture.getSize().y;
    Select_Weapon_Warrior_sprite.setScale({ scaleX, scaleY });

    Texture Select_Weapon_Mage_texture;
    if (!Select_Weapon_Mage_texture.loadFromFile("Select_Weapon_Mage.jpg"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Select_Weapon_Mage_sprite(Select_Weapon_Mage_texture);
    scaleX = 1200.f / Select_Weapon_Mage_texture.getSize().x;
    scaleY = 800.f / Select_Weapon_Mage_texture.getSize().y;
    Select_Weapon_Mage_sprite.setScale({ scaleX, scaleY });

    Texture ShortBow_texture;
    if (!ShortBow_texture.loadFromFile("ShortBow.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite ShortBow_sprite(ShortBow_texture);
    scaleX = 200.f / ShortBow_texture.getSize().x;
    scaleY = 250.f / ShortBow_texture.getSize().y;
    ShortBow_sprite.setScale({ scaleX, scaleY });
    ShortBow_sprite.setPosition({ 720,280 });

    Texture LongBow_texture;
    if (!LongBow_texture.loadFromFile("LongBow.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite LongBow_sprite(LongBow_texture);
    scaleX = 300.f / LongBow_texture.getSize().x;
    scaleY = 350.f / LongBow_texture.getSize().y;
    LongBow_sprite.setScale({ scaleX, scaleY });
    LongBow_sprite.setPosition({ 720,250 });

    Texture Sword_texture;
    if (!Sword_texture.loadFromFile("Sword.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Sword_sprite(Sword_texture);
    scaleX = 300.f / Sword_texture.getSize().x;
    scaleY = 300.f / Sword_texture.getSize().y;
    Sword_sprite.setScale({ scaleX, scaleY });
    Sword_sprite.setPosition({ 680,260 });

    Texture Axe_texture;
    if (!Axe_texture.loadFromFile("Axe.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Axe_sprite(Axe_texture);
    scaleX = 300.f / Axe_texture.getSize().x;
    scaleY = 350.f / Axe_texture.getSize().y;
    Axe_sprite.setScale({ scaleX, scaleY });
    Axe_sprite.setPosition({ 700,250 });

    Texture FireStaff_texture;
    if (!FireStaff_texture.loadFromFile("FireStaff.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite FireStaff_sprite(FireStaff_texture);
    scaleX = 300.f / FireStaff_texture.getSize().x;
    scaleY = 320.f / FireStaff_texture.getSize().y;
    FireStaff_sprite.setScale({ scaleX, scaleY });
    FireStaff_sprite.setPosition({ 700,250 });

    Texture IceStaff_texture;
    if (!IceStaff_texture.loadFromFile("IceStaff.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite IceStaff_sprite(IceStaff_texture);
    scaleX = 300.f / IceStaff_texture.getSize().x;
    scaleY = 320.f / IceStaff_texture.getSize().y;
    IceStaff_sprite.setScale({ scaleX, scaleY });
    IceStaff_sprite.setPosition({ 700,250 });

    Texture Grid_Background_texture;
    if (!Grid_Background_texture.loadFromFile("GridBackground.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Grid_Background_sprite(Grid_Background_texture);
    scaleX = 1200.f / Grid_Background_texture.getSize().x;
    scaleY = 700.f / Grid_Background_texture.getSize().y;
    Grid_Background_sprite.setScale({ scaleX, scaleY });
	Grid_Background_sprite.setPosition({ 0, 0 });

	Texture Goblin_texture;
	if (!Goblin_texture.loadFromFile("Goblin.png"))
	{
		cout << "Error Loading the Background" << endl;
	}
	Sprite Goblin_sprite(Goblin_texture);
	scaleX = 250.f / Goblin_texture.getSize().x;
	scaleY = 350.f / Goblin_texture.getSize().y;
	Goblin_sprite.setScale({ scaleX, scaleY });
	Goblin_sprite.setPosition({ 700,250 });

    RenderWindow window(sf::VideoMode({ 1200, 800 }), "BATTLE ARENA");
    window.setFramerateLimit(60);

    if (!ImGui::SFML::Init(window))
    {
        cout << "Unexpected Error In Creating Window";
        return;
    }

	GameState currentstate = Start;
	CharacterState currentcharacter = Archer_character;
    WeaponState currentweapon;

    Game::select_Menus(window, currentstate, currentcharacter, currentweapon, Start_BackGround_sprite, Select_Character_sprite, Archer_sprite, Warrior_sprite, Mage_sprite, Select_Weapon_Archer_sprite, Select_Weapon_Warrior_sprite, Select_Weapon_Mage_sprite, ShortBow_sprite, LongBow_sprite, Sword_sprite, Axe_sprite, IceStaff_sprite, FireStaff_sprite);

	LongBow_sprite.setScale({ 0.2f, 0.2f });
    LongBow_sprite.setPosition({ 270.f, 690.f });
	ShortBow_sprite.setScale({ 0.2f, 0.2f });
	ShortBow_sprite.setPosition({ 280.f, 690.f });

	Sword_sprite.setScale({ 0.1f, 0.06f });
	Sword_sprite.setPosition({ 275.f, 680.f });
	Axe_sprite.setScale({ 0.05f, 0.05f });
	Axe_sprite.setPosition({ 270.f, 690.f });

	IceStaff_sprite.setScale({ 0.35f, 0.35f });
	IceStaff_sprite.setPosition({ 265.f, 680.f });
	FireStaff_sprite.setScale({ 0.15f, 0.15f });
	FireStaff_sprite.setPosition({ 275.f, 680.f });

	const CharacterState player_character = currentcharacter;
    WeaponType player_weapon = WeaponType::Weapon1;
    Sprite player_sprite(Archer_sprite);
	Sprite Weapon1_sprite(ShortBow_sprite);
	Sprite Weapon2_sprite(LongBow_sprite);
    Character* player;

    if (player_character == Archer_character)
    {
		if (currentweapon == ShortBow_weapon)
            player = new Archer("Leonidas", 100.f, 100.f, new ShortBow("Short_Bow", 10.f, 10.f), new LongBow("Long_Bow", 10.f, 10.f));
        else
        {
            player = new Archer("Leonidas", 100.f, 100.f, new LongBow("Long_Bow", 10.f, 10.f), new ShortBow("Short_Bow", 10.f, 10.f));
			Weapon1_sprite = LongBow_sprite;
			Weapon2_sprite = ShortBow_sprite;
        }
    }
    else if (player_character == Warrior_character)
    {
        if (currentweapon == Sword_weapon)
        {
            player = new Warrior("Achilles", 100.f, 100.f, new Sword("Sword", 10.f, 10.f), new Axe("Axe", 10.f, 10.f));
			Weapon1_sprite = Sword_sprite;
			Weapon2_sprite = Axe_sprite;
        }
        else
        {
            player = new Warrior("Hercules", 100.f, 100.f, new Axe("Axe", 10.f, 10.f), new Sword("Sword", 10.f, 10.f));
			Weapon1_sprite = Axe_sprite;
			Weapon2_sprite = Sword_sprite;
        }
		player_sprite = Warrior_sprite;
    }
    else
    {
        if (currentweapon == IceStaff_weapon)
        {
            player = new Mage("Gandalf", 100.f, 100.f, new IceStaff("Ice_Staff", 10.f, 10.f), new FireStaff("Fire_Staff", 10.f, 10.f));
			Weapon1_sprite = IceStaff_sprite;
			Weapon2_sprite = FireStaff_sprite;
        }
        else
        {
            player = new Mage("Gandalf", 100.f, 100.f, new FireStaff("Fire_Staff", 10.f, 10.f), new IceStaff("Ice_Staff", 10.f, 10.f));
			Weapon1_sprite = FireStaff_sprite;
			Weapon2_sprite = IceStaff_sprite;
        }
		player_sprite = Mage_sprite;
    }

	player_sprite.setScale({ 0.12f, 0.12f });
    player_sprite.setPosition({ 570.f, 565.f });
	Sprite show_sprite(player_sprite);
	show_sprite.setScale({ 0.3f, 0.3f });
	show_sprite.setPosition({ 30.f, 630.f });
	Goblin_sprite.setScale({ 0.12f, 0.12f });
	Goblin_sprite.setPosition({ 570.f, 30.f });

    Game::levels(window, Grid_Background_sprite, Goblin_sprite, player_sprite, show_sprite, Weapon1_sprite, Weapon2_sprite, currentstate);
    
    delete player;
}

void Game::levels(RenderWindow &window, Sprite &Grid_Background_sprite, Sprite &Goblin_sprite, Sprite &player_sprite, Sprite &show_sprite, Sprite &Weapon1_sprite, Sprite &Weapon2_sprite, GameState &currentstate) {
	RectangleShape background(Vector2f(1200.f, 100.f));
	background.setFillColor({24,26,25});
	background.setPosition({0.f, 700.f});
	CircleShape circle(110.f);
	circle.setFillColor({ 46,51,48 });
	circle.setPosition({ 0.8f,645.f });
    circle.setOutlineColor(Color::Black);
	circle.setOutlineThickness(5.f);
    CircleShape weapon1_circle = circle;
	weapon1_circle.setPosition({ 250.f, 680.f });
    weapon1_circle.setRadius(80.f);

    bool initialized_level1 = false;

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
        switch (currentstate) {
		case Level1:
			level1(initialized_level1);
			break;
		case Level2:
			// level2();
			break;
        }

        window.clear();

		window.draw(Grid_Background_sprite);
		window.draw(background);
        window.draw(circle);
		window.draw(weapon1_circle);
        window.draw(player_sprite);
		window.draw(Goblin_sprite);
        window.draw(show_sprite);
        window.draw(Weapon1_sprite);

        ImGui::SFML::Render(window);
        window.display();
    }

}

void Game::level1(bool &initialized_level1) {
    if (!initialized_level1) {
        vector<vector<char>> grid(8, vector<char>(9, ' '));
        grid[7][5] = 'P';
        grid[0][5] = 'E';
		Enemy* enemy = new Goblin();
		initialized_level1 = true;
    }

}

void Game::select_Menus(RenderWindow &window, GameState &currentstate, CharacterState &currentcharacter, WeaponState &currentweapon, Sprite &Start_BackGround_sprite, Sprite &Select_Character_sprite, Sprite &Archer_sprite, Sprite &Warrior_sprite, Sprite &Mage_sprite, Sprite &Select_Weapon_Archer_sprite, Sprite &Select_Weapon_Warrior_sprite, Sprite &Select_Weapon_Mage_sprite, Sprite &ShortBow_sprite, Sprite &LongBow_sprite, Sprite &Sword_sprite, Sprite &Axe_sprite, Sprite &IceStaff_sprite, Sprite &FireStaff_sprite) {

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
            select_weapon_screen(window, currentstate, currentcharacter, currentweapon, Select_Weapon_Archer_sprite, Select_Weapon_Warrior_sprite, Select_Weapon_Mage_sprite, ShortBow_sprite, LongBow_sprite, Sword_sprite, Axe_sprite, IceStaff_sprite, FireStaff_sprite);
        }
        else
        {
            ImGui::SFML::Render(window);
            return;
        }

        ImGui::SFML::Render(window);
        window.display();
    }
}

void Game::start_screen(RenderWindow &window,GameState &currentstate, Sprite &Start_BackGround_sprite) {
    window.draw(Start_BackGround_sprite);

    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 20.0f;
    style.FramePadding = ImVec2(15, 10);
    style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.1f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(1.f, 1.f, 1.f, 0.2f);

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
    CircleShape triangle(10.f, 3);
    triangle.setFillColor({ 102,105,107 });
    triangle.setPosition({ 20,40 });
    Angle angle = degrees(270);
    triangle.setRotation(angle);
    RectangleShape rect({ 25,10 });
    rect.setFillColor({ 102,105,107 });
    rect.setPosition({ 30,25 });
    window.draw(rect);
    window.draw(triangle);

	float buttonWidth, buttonHeight;

    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 25.0f;
    style.FramePadding = ImVec2(15, 10);
    style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.f, 0.f, 0.f, 0.15f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.f, 0.f, 0.f, 0.25f);


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
        currentcharacter = Archer_character;
		currentweapon = ShortBow_weapon;
    }

    ImGui::End();


    buttonWidth = window.getSize().x * 0.258f;
    buttonHeight = window.getSize().y * 0.123f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.308f - buttonWidth / 2, window.getSize().y * 0.565f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("Warrior", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentcharacter = Warrior_character;
		currentweapon = Axe_weapon;
    }

    ImGui::End();

    buttonWidth = window.getSize().x * 0.252f;
    buttonHeight = window.getSize().y * 0.12f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.308f - buttonWidth / 2, window.getSize().y * 0.702f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("Mage", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentcharacter = Mage_character;
		currentweapon = IceStaff_weapon;
    }

    ImGui::End();

    buttonWidth = window.getSize().x * 0.04f;
    buttonHeight = window.getSize().y * 0.025f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.03f - buttonWidth / 2, window.getSize().y * 0.028f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 0.5, buttonHeight + 0.1));

    ImGui::Begin("BACK", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentstate = Start;
    }

    ImGui::End();

    if (currentcharacter == Archer_character)
    {
        window.draw(Archer_sprite);
    }
    else if (currentcharacter == Warrior_character)
    {
		window.draw(Warrior_sprite);
    }
    else if (currentcharacter == Mage_character)
    {
        window.draw(Mage_sprite);

    }
}

void Game::select_weapon_screen(RenderWindow &window, GameState &currentstate, CharacterState &currentcharacter, WeaponState &currentweapon, Sprite &Select_Weapon_Archer_sprite, Sprite &Select_Weapon_Warrior_sprite, Sprite &Select_Weapon_Mage_sprite, Sprite  &ShortBow_sprite, Sprite &LongBow_sprite, Sprite &Sword_sprite, Sprite &Axe_sprite, Sprite &IceStaff_sprite, Sprite &FireStaff_sprite) {
	if (currentcharacter == Archer_character)
	{
		window.draw(Select_Weapon_Archer_sprite);
	}
	else if (currentcharacter == Warrior_character)
	{
		window.draw(Select_Weapon_Warrior_sprite);
	}
	else if (currentcharacter == Mage_character)
	{
		window.draw(Select_Weapon_Mage_sprite);
	}
    CircleShape triangle(10.f, 3);
    triangle.setFillColor({ 102,105,107 });
    triangle.setPosition({ 20,40 });
    Angle angle = degrees(270);
    triangle.setRotation(angle);
    RectangleShape rect({ 25,10 });
    rect.setFillColor({ 102,105,107 });
    rect.setPosition({ 30,25 });
    window.draw(rect);
    window.draw(triangle);

    float buttonWidth, buttonHeight;

    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 25.0f;
    style.FramePadding = ImVec2(15, 10);
    style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.f, 0.f, 0.f, 0.15f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.f, 0.f, 0.f, 0.25f);


    buttonWidth = window.getSize().x * 0.34f;
    buttonHeight = window.getSize().y * 0.134f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.6f - buttonWidth / 2, window.getSize().y * 0.79f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

    ImGui::Begin("SELECT_WEAPON", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentstate = Level1;
    }

    ImGui::End();


    if (currentcharacter == Archer_character)
    {
        buttonWidth = window.getSize().x * 0.348f;
        buttonHeight = window.getSize().y * 0.138f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.378f - buttonWidth / 2, window.getSize().y * 0.428f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("ShortBow_weapon", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            currentweapon = ShortBow_weapon;
        }

        ImGui::End();


        buttonWidth = window.getSize().x * 0.348f;
        buttonHeight = window.getSize().y * 0.135f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.378f - buttonWidth / 2, window.getSize().y * 0.59f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("LongBow_weapon", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            currentweapon = LongBow_weapon;
        }

        ImGui::End();
    }
    else if (currentcharacter == Warrior_character)
    {
        buttonWidth = window.getSize().x * 0.29f;
        buttonHeight = window.getSize().y * 0.138f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.352f - buttonWidth / 2, window.getSize().y * 0.425f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("AXE", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            currentweapon = Axe_weapon;
        }

        ImGui::End();


        buttonWidth = window.getSize().x * 0.29f;
        buttonHeight = window.getSize().y * 0.135f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.352f - buttonWidth / 2, window.getSize().y * 0.585f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("Sword_weapon", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            currentweapon = Sword_weapon;
        }

        ImGui::End();
    }
    else if (currentcharacter == Mage_character)
    {
        buttonWidth = window.getSize().x * 0.326f;
        buttonHeight = window.getSize().y * 0.138f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.368f - buttonWidth / 2, window.getSize().y * 0.425f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("ICESTAFF", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            currentweapon = IceStaff_weapon;
        }

        ImGui::End();


        buttonWidth = window.getSize().x * 0.326f;
        buttonHeight = window.getSize().y * 0.135f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.368f - buttonWidth / 2, window.getSize().y * 0.585f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("FIRESTAFF", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            currentweapon = FireStaff_weapon;
        }

        ImGui::End();
    }

    buttonWidth = window.getSize().x * 0.04f;
    buttonHeight = window.getSize().y * 0.025f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.03f - buttonWidth / 2, window.getSize().y * 0.028f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 0.5, buttonHeight + 0.1));

    ImGui::Begin("BACK", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentstate = SelectCharacter;
    }

    ImGui::End();

	if (currentweapon == ShortBow_weapon)
	{
        window.draw(ShortBow_sprite);
	}
	else if (currentweapon == LongBow_weapon)
	{
        window.draw(LongBow_sprite);
	}
	else if (currentweapon == Sword_weapon)
	{
        window.draw(Sword_sprite);
	}
	else if (currentweapon == Axe_weapon)
	{
        window.draw(Axe_sprite);
	}
	else if (currentweapon == IceStaff_weapon)
	{
		window.draw(IceStaff_sprite);
	}
	else if (currentweapon == FireStaff_weapon)
	{
		window.draw(FireStaff_sprite);
	}

}