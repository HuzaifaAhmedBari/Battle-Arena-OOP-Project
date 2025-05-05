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

    Texture Level_Complete_texture;
    if (!Level_Complete_texture.loadFromFile("Level_Complete.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Level_Complete_sprite(Level_Complete_texture);
    scaleX = 1200.f / Level_Complete_texture.getSize().x;
    scaleY = 800.f / Level_Complete_texture.getSize().y;
    Level_Complete_sprite.setScale({ scaleX, scaleY });

    Texture Level_Failed_texture;
    if (!Level_Failed_texture.loadFromFile("Level_Failed.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Level_Failed_sprite(Level_Failed_texture);
    scaleX = 1200.f / Level_Failed_texture.getSize().x;
    scaleY = 800.f / Level_Failed_texture.getSize().y;
    Level_Failed_sprite.setScale({ scaleX, scaleY });

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
    scaleX = 230.f / ShortBow_texture.getSize().x;
    scaleY = 270.f / ShortBow_texture.getSize().y;
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
    Goblin_sprite.setScale({ 0.12f, 0.12f });
	Goblin_sprite.setPosition({ 700,250 });

    Texture Witch_texture;
    if (!Witch_texture.loadFromFile("Witch.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Witch_sprite(Witch_texture);
    scaleX = 250.f / Witch_texture.getSize().x;
    scaleY = 350.f / Witch_texture.getSize().y;
    Witch_sprite.setScale({ scaleX, scaleY });
    Witch_sprite.setScale({ 0.11f, 0.11f });
    Witch_sprite.setPosition({ 700,250 });

    Texture Slash_texture;
    if (!Slash_texture.loadFromFile("Slash.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Slash_sprite(Slash_texture);
    scaleX = 100.f / Slash_texture.getSize().x;
    scaleY = 100.f / Slash_texture.getSize().y;
    Slash_sprite.setScale({ scaleX, scaleY });
    Slash_sprite.setScale({ 0.3f, 0.3f });
    Slash_sprite.setPosition({ 500,350 });

    Texture Arrow_texture;
    if (!Arrow_texture.loadFromFile("Arrow.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Arrow_sprite(Arrow_texture);
    scaleX = 100.f / Arrow_texture.getSize().x;
    scaleY = 100.f / Arrow_texture.getSize().y;
    Arrow_sprite.setScale({ scaleX, scaleY });
    Arrow_sprite.setScale({ 0.2f, 0.2f });
    Arrow_sprite.setPosition({ 500,350 });

    Texture Fire_texture;
    if (!Fire_texture.loadFromFile("Fire.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Fire_sprite(Fire_texture);
    scaleX = 100.f / Fire_texture.getSize().x;
    scaleY = 100.f / Fire_texture.getSize().y;
    Fire_sprite.setScale({ scaleX, scaleY });
    Fire_sprite.setScale({ 0.2f, 0.2f });
    Fire_sprite.setPosition({ 500,350 });

    Texture Ice_texture;
    if (!Ice_texture.loadFromFile("Ice.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Ice_sprite(Ice_texture);
    scaleX = 100.f / Ice_texture.getSize().x;
    scaleY = 100.f / Ice_texture.getSize().y;
    Ice_sprite.setScale({ scaleX, scaleY });
    Ice_sprite.setScale({ 0.2f, 0.2f });
    Ice_sprite.setPosition({ 500,350 });

    Texture Circle_texture;
    if (!Circle_texture.loadFromFile("Circle_PlaceHolders.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Circle_sprite(Circle_texture);
    scaleX = 250.f / Circle_texture.getSize().x;
    scaleY = 250.f / Circle_texture.getSize().y;
    Circle_sprite.setScale({ scaleX, scaleY });
    Circle_sprite.setPosition({ -10,620 });

    Texture Square_texture;
    if (!Square_texture.loadFromFile("Square_PlaceHolder.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Square_sprite(Square_texture);
    scaleX = 80.f / Square_texture.getSize().x;
    scaleY = 80.f / Square_texture.getSize().y;
    Square_sprite.setScale({ scaleX, scaleY });
    Square_sprite.setPosition({ 1018,258 });

    Texture Attack_Button_texture;
    if (!Attack_Button_texture.loadFromFile("Attack_Button.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite Attack_Button_sprite(Attack_Button_texture);
    scaleX = 250.f / Attack_Button_texture.getSize().x;
    scaleY = 120.f / Attack_Button_texture.getSize().y;
    Attack_Button_sprite.setScale({ scaleX, scaleY });
    Attack_Button_sprite.setPosition({ 900,690 });


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
    LongBow_sprite.setPosition({ 450.f, 690.f });
	ShortBow_sprite.setScale({ 0.2f, 0.2f });
	ShortBow_sprite.setPosition({ 460.f, 690.f });

	Sword_sprite.setScale({ 0.1f, 0.06f });
	Sword_sprite.setPosition({ 455.f, 680.f });
	Axe_sprite.setScale({ 0.05f, 0.05f });
	Axe_sprite.setPosition({ 450.f, 690.f });

	IceStaff_sprite.setScale({ 0.35f, 0.35f });
	IceStaff_sprite.setPosition({ 445.f, 680.f });
	FireStaff_sprite.setScale({ 0.15f, 0.15f });
	FireStaff_sprite.setPosition({ 455.f, 680.f });

    if (currentstate == GameState::Continue)
    {
        ifstream file("Save.txt", ios::in);
        if (file.is_open())
        {
            string line;
			getline(file, line);
            stringstream ss(line);
            string character, weapon, state;
			getline(ss, character, ';');
			getline(ss, weapon, ';');
			getline(ss, state);
			if (character == "Archer")
			{
				currentcharacter = Archer_character;
			}
			else if (character == "Warrior")
			{
				currentcharacter = Warrior_character;
			}
			else
			{
				currentcharacter = Mage_character;
			}
			if (weapon == "Short_Bow")
			{
				currentweapon = ShortBow_weapon;
			}
			else if (weapon == "Long_Bow")
			{
				currentweapon = LongBow_weapon;
			}
			else if (weapon == "Sword")
			{
				currentweapon = Sword_weapon;
			}
			else if (weapon == "Axe")
			{
				currentweapon = Axe_weapon;
			}
			else if (weapon == "Ice_Staff")
			{
				currentweapon = IceStaff_weapon;
			}
			else
			{
				currentweapon = FireStaff_weapon;
			}
			if (state == "Level1")
			{
				currentstate = Level1;
			}
			else if (state == "Level2")
			{
				currentstate = Level2;
			}
			else if (state == "Level3")
			{
				currentstate = Level3;
			}
			else if (state == "Level4")
			{
				currentstate = Level4;
			}
			else
			{
				currentstate = Level5;
			}
        }
    }

	const CharacterState player_character = currentcharacter;
    WeaponType player_weapon = WeaponType::Weapon1;
    Sprite player_sprite(Archer_sprite);
	Sprite Weapon_sprite(ShortBow_sprite);
    Sprite Animation_sprite(Arrow_sprite);
    Character* player;

    if (player_character == Archer_character)
    {
        if (currentweapon == ShortBow_weapon)
        {
            player = new Archer("Leonidas", 150.f, 100.f, new ShortBow("Short_Bow", 3.f, 35.f));
        }
        else
        {
            player = new Archer("HawkEye", 150.f, 100.f, new LongBow("Long_Bow", 4.f, 30.f));
			Weapon_sprite = LongBow_sprite;
        }
    }
    else if (player_character == Warrior_character)
    {
        if (currentweapon == Sword_weapon)
        {
            player = new Warrior("Achilles", 200.f, 100.f, new Sword("Sword", 1.f, 35.f));
			Weapon_sprite = Sword_sprite;
        }
        else
        {
            player = new Warrior("Hercules", 200.f, 100.f, new Axe("Axe", 1.f, 35.f));
			Weapon_sprite = Axe_sprite;
        }

        Animation_sprite = Slash_sprite;
		player_sprite = Warrior_sprite;
    }
    else
    {
        if (currentweapon == IceStaff_weapon)
        {
            player = new Mage("Gandalf", 150.f, 100.f, new IceStaff("Ice_Staff", 3.f, 30.f));
			Weapon_sprite = IceStaff_sprite;
            Animation_sprite = Ice_sprite;
        }
        else
        {
            player = new Mage("Bobzie", 150.f, 100.f, new FireStaff("Fire_Staff", 3.f, 30.f));
			Weapon_sprite = FireStaff_sprite;
			Animation_sprite = Fire_sprite;
        }
		player_sprite = Mage_sprite;
    }

	player_sprite.setScale({ 0.12f, 0.12f });
    player_sprite.setPosition({ 570.f, 565.f });
	Sprite show_sprite(player_sprite);
	show_sprite.setScale({ 0.3f, 0.3f });
	show_sprite.setPosition({ 30.f, 630.f });

    Game::levels(window, player, Grid_Background_sprite, Level_Complete_sprite, Level_Failed_sprite, Goblin_sprite, Witch_sprite, player_sprite, show_sprite, Weapon_sprite, Animation_sprite, Circle_sprite, Square_sprite, Attack_Button_sprite, currentstate);
    
    delete player;
}

void Game::levels(RenderWindow &window, Character *player, Sprite &Grid_Background_sprite, Sprite &Level_Complete_sprite, Sprite &Level_Failed_sprite, Sprite &Goblin_sprite, Sprite &Witch_sprite, Sprite &player_sprite, Sprite &show_sprite, Sprite &Weapon_sprite, Sprite &Animation_sprite, Sprite &Circle_sprite, Sprite &Square_sprite, Sprite &Attack_Button_sprite, GameState &currentstate) {
	RectangleShape background(Vector2f(1200.f, 100.f));
	background.setFillColor({38,33,27});
	background.setPosition({0.f, 700.f});
    bool completed = false, next = false;

    while (true)
    {
        player->sethealth(player->getmaxhealth());
        switch (currentstate) {
        case Level1:
            completed = Game::level1(window, player, Grid_Background_sprite, Goblin_sprite, player_sprite, show_sprite, Weapon_sprite, Animation_sprite, Circle_sprite, Square_sprite, Attack_Button_sprite, currentstate, background);
            if (completed)
            {
                next = Game::Level_Complete(window, Level_Complete_sprite, player, currentstate);
                if (!next)
                {
                    window.close();
                    return;
                }
            }
            else
            {
                next = Game::Level_Failed(window, Level_Failed_sprite, player, currentstate);
                if (!next)
                {
                    window.close();
                    return;
                }
            }
            break;
        case Level2:
            completed = Game::level2(window, player, Grid_Background_sprite, Witch_sprite, player_sprite, show_sprite, Weapon_sprite, Animation_sprite, Circle_sprite, Square_sprite,Attack_Button_sprite, currentstate, background);
            if (completed)
            {
                next = Game::Level_Complete(window, Level_Complete_sprite, player, currentstate);
                if (!next)
                {
                    window.close();
                    return;
                }
            }
            else
            {
				next = Game::Level_Failed(window, Level_Failed_sprite, player, currentstate);
                if (!next)
                {
                    window.close();
                    return;
                }
            }
            break;
        case Level3:
            completed = Game::level3(window, player, Grid_Background_sprite, Witch_sprite, Goblin_sprite, player_sprite, show_sprite, Weapon_sprite, Circle_sprite, Animation_sprite, Square_sprite, Attack_Button_sprite, currentstate, background);
            if (completed)
            {
                next = Game::Level_Complete(window, Level_Complete_sprite, player, currentstate);
                if (!next)
                {
                    window.close();
                    return;
                }
            }
            else
            {
				next = Game::Level_Failed(window, Level_Failed_sprite, player, currentstate);
				if (!next)
				{
					window.close();
					return;
				}
            }
            break;
        case Level4:
			window.close();
			return;
        case Level5:
			window.close();
			return;
        default:
            window.close();
            break;
        }
    }
}

bool Game::level1(RenderWindow &window, Character *player, Sprite &Grid_Background_sprite, Sprite &Goblin_sprite, Sprite &player_sprite, Sprite &show_sprite, Sprite &Weapon_sprite, Sprite &Animation_sprite, Sprite &Circle_sprite, Sprite &Square_sprite, Sprite &Attack_Button_sprite, GameState& currentstate, RectangleShape& background) {
    Goblin_sprite.setPosition({ 570.f, 30.f });
    Sprite weapon_circle_sprite(Circle_sprite);
	weapon_circle_sprite.setScale({ 0.6f, 0.6f });
	weapon_circle_sprite.setPosition({ 400.f, 650.f });
	Sprite show_enemy(Goblin_sprite);
	show_enemy.setScale({ 0.09f, 0.09f });
	show_enemy.setPosition({ 1035.f, 270.f });
    vector<vector<char>> grid(8, vector<char>(9, ' '));
    grid[7][4] = 'P';
    pair<int, int> player_position = { 7,4 }, enemy_position = { 0,4 };
    grid[0][5] = 'E';
    Enemy* enemy = new Goblin(); 
    Direction moving, looking = Direction::Up;
	Vector2f animationStart, animationEnd;
    Angle angle;
    float animationTime, animationDuration = 0.005f;
    bool turn = true, attacked=false, animating_player=false, animating_enemy=false, enemy_turn=false;

    Clock deltaClock;
    while (window.isOpen()) {
        while (const auto event = window.pollEvent()) {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (turn && !animating_player && !animating_enemy && !enemy_turn)
                {
                    if (keyPressed->scancode == sf::Keyboard::Scancode::W)
                    {
                        moving = Direction::Up;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::S)
                    {
                        moving = Direction::Down;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::A)
                    {
                        moving = Direction::Left;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::D)
                    {
                        moving = Direction::Right;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                }
                if (!attacked && !animating_player && !animating_enemy && !enemy_turn)
                {
                    if (keyPressed->scancode == sf::Keyboard::Scancode::Up)
                    {
                        looking = Direction::Up;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Down)
                    {
                        looking = Direction::Down;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Left)
                    {
                        looking = Direction::Left;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Right)
                    {
                        looking = Direction::Right;
                    }
					else if (keyPressed->scancode == sf::Keyboard::Scancode::Enter)
					{
                        float damage_taken = player->attack(player_position.first, player_position.second, enemy_position.first, enemy_position.second, looking);
                        enemy->takeDamage(damage_taken);
                        attacked = true;
                        turn = false;
						animating_player = true;
					}
                }
            }

        }

        ImGui::SFML::Update(window, deltaClock.restart());
        window.clear();

        ImGuiStyle& style = ImGui::GetStyle();
        style.FrameRounding = 10.0f;
        style.FramePadding = ImVec2(15, 10);
        style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
        style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.1f);
        style.Colors[ImGuiCol_ButtonActive] = ImVec4(1.f, 1.f, 1.f, 0.2f);

        float buttonWidth = window.getSize().x * 0.18f;
        float buttonHeight = window.getSize().y * 0.105f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.842f - buttonWidth / 2, window.getSize().y * 0.925f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("ATTACK", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);
        ImGui::BeginDisabled(animating_player || animating_enemy || enemy_turn);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            float damage_taken = player->attack(player_position.first, player_position.second, enemy_position.first, enemy_position.second, looking);
            enemy->takeDamage(damage_taken);
            attacked = true;
            turn = false;
            animating_player = true;
        }

        ImGui::EndDisabled();
        ImGui::End();

        if (!turn && enemy_turn && !animating_player && !animating_enemy)
        {
            turn = enemy->move(Goblin_sprite, grid, enemy_position.first, enemy_position.second, player_position.first, player_position.second);
			float damageTaken = enemy->attack(player_position.first, player_position.second, enemy_position.first, enemy_position.second);
			player->takeDamage(damageTaken);
            attacked = false;
            enemy_turn = false;
        }

        if (attacked)
        {
            sf::Vector2f playerPos = player_sprite.getPosition();

            sf::Vector2f direction;
            int tileSize = 60;

            switch (looking)
            {
                case Direction::Up:
                    direction = { 0, -1 };
                    playerPos.x += 10;
                    angle = degrees(270);
                    break;
                case Direction::Down:
                    direction = { 0, 1 };
                    playerPos.x += 40;
					angle = degrees(90);
                    break;
                case Direction::Left:
                    direction = { -1, 0 };
					playerPos.y += 50;
					angle = degrees(180);
                    break;
                case Direction::Right:
                    direction = { 1, 0 }; 
					playerPos.y += 40;
                    playerPos.x += 20;
                    angle = degrees(0);
                    break;
            }
            
			Animation_sprite.setRotation(angle);
            animationStart = playerPos;
            animationEnd = playerPos + direction * (float)(tileSize * player->getrange());
            Animation_sprite.setPosition(animationStart);

            animationTime = 0.f;
            animating_player = true;

            attacked = false;
        }
        if (animating_player)
        {
            animationTime += deltaClock.restart().asSeconds();
            float t = min(animationTime / animationDuration, 1.f);

            sf::Vector2f currentPos = animationStart + (animationEnd - animationStart) * t;
            Animation_sprite.setPosition(currentPos);

            if (t >= 1.f)
            {
                animating_player = false;
                enemy_turn = true;
            }

        }

        ImVec4 barColor;
        float hp = player->gethealth() / player->getmaxhealth();
        if (hp > 0.6f)
            barColor = ImVec4(0.0f, 1.0f, 0.0f, 0.7f);
        else if (hp > 0.3f)
            barColor = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
        else
            barColor = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.38f / 2, window.getSize().y * 1.78f / 2));
        ImGui::Begin("Player HP", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);
        ImGui::Text("HP:");
		ImGui::PushStyleColor(ImGuiCol_PlotHistogram, barColor);
        ImGui::ProgressBar(hp, ImVec2(150.f, 20.f));
        ImGui::PopStyleColor();
        ImGui::End();

		hp = enemy->gethealth() / enemy->getmaxHealth();
        if (hp > 0.6f)
            barColor = ImVec4(0.0f, 1.0f, 0.0f, 0.7f);
        else if (hp > 0.3f)
            barColor = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
        else
            barColor = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 1.815f / 2, window.getSize().y * 0.67f / 2));
        ImGui::Begin("Enemy HP", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);
        ImGui::Text("HP:");
        ImGui::PushStyleColor(ImGuiCol_PlotHistogram, barColor);
        ImGui::ProgressBar(hp, ImVec2(100.f, 20.f));
        ImGui::PopStyleColor();
        ImGui::End();

        window.draw(Grid_Background_sprite);
        window.draw(background);
        window.draw(player_sprite);
        window.draw(Goblin_sprite);
		window.draw(Circle_sprite);
		window.draw(weapon_circle_sprite);
		window.draw(show_sprite);
		window.draw(Weapon_sprite);
        window.draw(Attack_Button_sprite);
        window.draw(Square_sprite);
		window.draw(show_enemy);
        if (animating_player)
            window.draw(Animation_sprite);


        ImGui::SFML::Render(window);
        window.display();

        if (!enemy->isAlive() && !animating_player)
        {
			currentstate = Level2;
            return true;
        }
		if (!player->isAlive())
		{
			return false;
		}
    }

}

bool Game::level2(RenderWindow &window, Character *player, Sprite &Grid_Background_sprite, Sprite &Witch_sprite, Sprite &player_sprite, Sprite &show_sprite, Sprite &Weapon_sprite, Sprite &Animation_sprite, Sprite &Circle_sprite, Sprite &Square_sprite, Sprite &Attack_Button_sprite, GameState &currentstate, RectangleShape& background) {
    player_sprite.setPosition({ 570.f, 565.f });
    Witch_sprite.setPosition({ 570.f, 20.f });
    Sprite weapon_circle_sprite(Circle_sprite);
    weapon_circle_sprite.setScale({ 0.6f, 0.6f });
    weapon_circle_sprite.setPosition({ 400.f, 650.f });
    Sprite show_enemy(Witch_sprite);
    show_enemy.setScale({ 0.09f, 0.09f });
    show_enemy.setPosition({ 1035.f, 265.f });
    vector<vector<char>> grid(8, vector<char>(9, ' '));
    grid[7][4] = 'P';
    pair<int, int> player_position = { 7,4 }, enemy_position = { 0,4 };
    grid[0][5] = 'E';
    Enemy* enemy = new Witch();
    Direction moving, looking = Direction::Up;
    Vector2f animationStart, animationEnd;
    Angle angle;
    float animationTime, animationDuration = 0.007f;
    bool turn = true, attacked = false, animating_player = false, animating_enemy = false, enemy_turn = false;

    Clock deltaClock;
    while (window.isOpen()) {
        while (const auto event = window.pollEvent()) {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (turn && !animating_player && !animating_enemy && !enemy_turn)
                {
                    if (keyPressed->scancode == sf::Keyboard::Scancode::W)
                    {
                        moving = Direction::Up;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::S)
                    {
                        moving = Direction::Down;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::A)
                    {
                        moving = Direction::Left;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::D)
                    {
                        moving = Direction::Right;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                }
                if (!attacked && !animating_player && !animating_enemy && !enemy_turn)
                {
                    if (keyPressed->scancode == sf::Keyboard::Scancode::Up)
                    {
                        looking = Direction::Up;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Down)
                    {
                        looking = Direction::Down;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Left)
                    {
                        looking = Direction::Left;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Right)
                    {
                        looking = Direction::Right;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Enter)
                    {
                        float damage_taken = player->attack(player_position.first, player_position.second, enemy_position.first, enemy_position.second, looking);
                        enemy->takeDamage(damage_taken);
                        attacked = true;
                        turn = false;
                        animating_player = true;
                    }
                }
            }

        }

        ImGui::SFML::Update(window, deltaClock.restart());
        window.clear();

        ImGuiStyle& style = ImGui::GetStyle();
        style.FrameRounding = 10.0f;
        style.FramePadding = ImVec2(15, 10);
        style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
        style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.1f);
        style.Colors[ImGuiCol_ButtonActive] = ImVec4(1.f, 1.f, 1.f, 0.2f);

        float buttonWidth = window.getSize().x * 0.18f;
        float buttonHeight = window.getSize().y * 0.105f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.842f - buttonWidth / 2, window.getSize().y * 0.925f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("ATTACK", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);
        ImGui::BeginDisabled(animating_player || animating_enemy || enemy_turn);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            float damage_taken = player->attack(player_position.first, player_position.second, enemy_position.first, enemy_position.second, looking);
            enemy->takeDamage(damage_taken);
            attacked = true;
            turn = false;
            animating_player = true;
        }

        ImGui::EndDisabled();
        ImGui::End();

        if (!turn && enemy_turn && !animating_player && !animating_enemy)
        {
            turn = enemy->move(Witch_sprite, grid, enemy_position.first, enemy_position.second, player_position.first, player_position.second);
            float damageTaken = enemy->attack(player_position.first, player_position.second, enemy_position.first, enemy_position.second);
            player->takeDamage(damageTaken);
            attacked = false;
            enemy_turn = false;
        }

        if (attacked)
        {
            sf::Vector2f playerPos = player_sprite.getPosition();

            sf::Vector2f direction;
            int tileSize = 64;

            switch (looking)
            {
            case Direction::Up:
                direction = { 0, -1 };
                playerPos.x += 10;
                angle = degrees(270);
                break;
            case Direction::Down:
                direction = { 0, 1 };
                playerPos.x += 40;
                angle = degrees(90);
                break;
            case Direction::Left:
                direction = { -1, 0 };
                playerPos.y += 50;
                angle = degrees(180);
                break;
            case Direction::Right:
                direction = { 1, 0 };
                playerPos.y += 40;
                playerPos.x += 40;
                angle = degrees(0);
                break;
            }

            Animation_sprite.setRotation(angle);
            animationStart = playerPos;
            animationEnd = playerPos + direction * (float)(tileSize * player->getrange());
            Animation_sprite.setPosition(animationStart);

            animationTime = 0.f;
            animating_player = true;

            attacked = false;
        }
        if (animating_player)
        {
            animationTime += deltaClock.restart().asSeconds();
            float t = min(animationTime / animationDuration, 1.f);

            sf::Vector2f currentPos = animationStart + (animationEnd - animationStart) * t;
            Animation_sprite.setPosition(currentPos);

            if (t >= 1.f)
            {
                animating_player = false;
                enemy_turn = true;
            }

        }

        ImVec4 barColor;
        float hp = player->gethealth() / player->getmaxhealth();
        if (hp > 0.6f)
            barColor = ImVec4(0.0f, 1.0f, 0.0f, 0.7f);
        else if (hp > 0.3f)
            barColor = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
        else
            barColor = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.38f / 2, window.getSize().y * 1.78f / 2));
        ImGui::Begin("Player HP", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);
        ImGui::Text("HP:");
        ImGui::PushStyleColor(ImGuiCol_PlotHistogram, barColor);
        ImGui::ProgressBar(hp, ImVec2(150.f, 20.f));
        ImGui::PopStyleColor();
        ImGui::End();

        hp = enemy->gethealth() / enemy->getmaxHealth();
        if (hp > 0.6f)
            barColor = ImVec4(0.0f, 1.0f, 0.0f, 0.7f);
        else if (hp > 0.3f)
            barColor = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
        else
            barColor = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 1.815f / 2, window.getSize().y * 0.67f / 2));
        ImGui::Begin("Enemy HP", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);
        ImGui::Text("HP:");
        ImGui::PushStyleColor(ImGuiCol_PlotHistogram, barColor);
        ImGui::ProgressBar(hp, ImVec2(100.f, 20.f));
        ImGui::PopStyleColor();
        ImGui::End();

        window.draw(Grid_Background_sprite);
        window.draw(background);
        window.draw(player_sprite);
        window.draw(Witch_sprite);
        window.draw(Circle_sprite);
        window.draw(weapon_circle_sprite);
        window.draw(show_sprite);
        window.draw(Weapon_sprite);
        window.draw(Attack_Button_sprite);
        window.draw(Square_sprite);
        window.draw(show_enemy);
        if (animating_player)
            window.draw(Animation_sprite);


        ImGui::SFML::Render(window);
        window.display();

        if (!enemy->isAlive() && !animating_player)
        {
            currentstate = Level3;
            return true;
        }
        if (!player->isAlive())
        {
            return false;
        }
    }
}

bool Game::level3(RenderWindow& window, Character* player, Sprite& Grid_Background_sprite, Sprite& Witch_sprite, Sprite& Goblin_sprite, Sprite& player_sprite, Sprite& show_sprite, Sprite& Weapon_sprite, Sprite& Circle_sprite, Sprite& Animation_sprite, Sprite& Square_sprite, Sprite& Attack_Button_sprite, GameState& currentstate, RectangleShape& background) {
    player_sprite.setPosition({ 570.f, 565.f });
    Goblin_sprite.setPosition({570.f,30.f});
    Witch_sprite.setPosition({ 390.f, 20.f });
    Sprite weapon_circle_sprite(Circle_sprite);
    weapon_circle_sprite.setScale({ 0.6f, 0.6f });
    weapon_circle_sprite.setPosition({ 400.f, 650.f });
    Sprite show_enemy(Witch_sprite);
    show_enemy.setScale({ 0.09f, 0.09f });
    show_enemy.setPosition({ 1035.f, 265.f });
    Sprite show_enemy2(Goblin_sprite);
    show_enemy2.setScale({ 0.09f, 0.09f });
    show_enemy2.setPosition({ 1035.f, 340.f });
    Sprite Square2_sprite = Square_sprite;
	Square2_sprite.setPosition({ 1018.f, 328.f });
    vector<vector<char>> grid(8, vector<char>(9, ' '));
    grid[7][4] = 'P';
    pair<int, int> player_position = { 7,4 }, enemy2_position = { 0,4 }, enemy1_position{0,2};
    grid[0][2] = 'E';
    grid[0][4] = 'E';
    Enemy* enemy1 = new Witch(), *enemy2 = new Goblin();
    Direction moving, looking = Direction::Up;
    Vector2f animationStart, animationEnd;
    Angle angle;
    float animationTime, animationDuration = 0.007f;
    bool turn = true, attacked = false, animating_player = false, animating_enemy = false, enemy_turn = false;

    Clock deltaClock;
    while (window.isOpen()) {
        while (const auto event = window.pollEvent()) {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (turn && !animating_player && !animating_enemy && !enemy_turn)
                {
                    if (keyPressed->scancode == sf::Keyboard::Scancode::W)
                    {
                        moving = Direction::Up;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::S)
                    {
                        moving = Direction::Down;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::A)
                    {
                        moving = Direction::Left;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::D)
                    {
                        moving = Direction::Right;
                        turn = player->movecharacter(player_sprite, moving, grid, player_position.first, player_position.second);
                    }
                }
                if (!attacked && !animating_player && !animating_enemy && !enemy_turn)
                {
                    if (keyPressed->scancode == sf::Keyboard::Scancode::Up)
                    {
                        looking = Direction::Up;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Down)
                    {
                        looking = Direction::Down;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Left)
                    {
                        looking = Direction::Left;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Right)
                    {
                        looking = Direction::Right;
                    }
                    else if (keyPressed->scancode == sf::Keyboard::Scancode::Enter)
                    {
                        float damage_taken = player->attack(player_position.first, player_position.second, enemy1_position.first, enemy1_position.second, looking);
                        enemy1->takeDamage(damage_taken);
                        damage_taken = player->attack(player_position.first, player_position.second, enemy2_position.first, enemy2_position.second, looking);
                        enemy2->takeDamage(damage_taken);
                        attacked = true;
                        turn = false;
                        animating_player = true;
                    }
                }
            }

        }

        ImGui::SFML::Update(window, deltaClock.restart());
        window.clear();

        ImGuiStyle& style = ImGui::GetStyle();
        style.FrameRounding = 10.0f;
        style.FramePadding = ImVec2(15, 10);
        style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
        style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.1f);
        style.Colors[ImGuiCol_ButtonActive] = ImVec4(1.f, 1.f, 1.f, 0.2f);

        float buttonWidth = window.getSize().x * 0.18f;
        float buttonHeight = window.getSize().y * 0.105f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.842f - buttonWidth / 2, window.getSize().y * 0.925f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("ATTACK", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);
        ImGui::BeginDisabled(animating_player || animating_enemy || enemy_turn);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            float damage_taken = player->attack(player_position.first, player_position.second, enemy1_position.first, enemy1_position.second, looking);
            if(enemy1->isAlive())
                enemy1->takeDamage(damage_taken);
            damage_taken = player->attack(player_position.first, player_position.second, enemy2_position.first, enemy2_position.second, looking);
            if(enemy2->isAlive())
                enemy2->takeDamage(damage_taken);
            attacked = true;
            turn = false;
            animating_player = true;
        }

        ImGui::EndDisabled();
        ImGui::End();

        if (!turn && enemy_turn && !animating_player && !animating_enemy)
        {
            if (enemy1->isAlive())
            {
                turn = enemy1->move(Witch_sprite, grid, enemy1_position.first, enemy1_position.second, player_position.first, player_position.second);
                float damageTaken = enemy1->attack(player_position.first, player_position.second, enemy1_position.first, enemy1_position.second);
                player->takeDamage(damageTaken);
            }
            if (enemy2->isAlive())
            {
                turn = enemy2->move(Goblin_sprite, grid, enemy2_position.first, enemy2_position.second, player_position.first, player_position.second);
                float damageTaken = enemy2->attack(player_position.first, player_position.second, enemy2_position.first, enemy2_position.second);
                player->takeDamage(damageTaken);
            }
            attacked = false;
            enemy_turn = false;
        }

        if (attacked)
        {
            sf::Vector2f playerPos = player_sprite.getPosition();

            sf::Vector2f direction;
            int tileSize = 64;

            switch (looking)
            {
            case Direction::Up:
                direction = { 0, -1 };
                playerPos.x += 10;
                angle = degrees(270);
                break;
            case Direction::Down:
                direction = { 0, 1 };
                playerPos.x += 40;
                angle = degrees(90);
                break;
            case Direction::Left:
                direction = { -1, 0 };
                playerPos.y += 50;
                angle = degrees(180);
                break;
            case Direction::Right:
                direction = { 1, 0 };
                playerPos.y += 40;
                playerPos.x += 40;
                angle = degrees(0);
                break;
            }

            Animation_sprite.setRotation(angle);
            animationStart = playerPos;
            animationEnd = playerPos + direction * (float)(tileSize * player->getrange());
            Animation_sprite.setPosition(animationStart);

            animationTime = 0.f;
            animating_player = true;

            attacked = false;
        }
        if (animating_player)
        {
            animationTime += deltaClock.restart().asSeconds();
            float t = min(animationTime / animationDuration, 1.f);

            sf::Vector2f currentPos = animationStart + (animationEnd - animationStart) * t;
            Animation_sprite.setPosition(currentPos);

            if (t >= 1.f)
            {
                animating_player = false;
                enemy_turn = true;
            }

        }

        ImVec4 barColor;
        float hp = player->gethealth() / player->getmaxhealth();
        if (hp > 0.6f)
            barColor = ImVec4(0.0f, 1.0f, 0.0f, 0.7f);
        else if (hp > 0.3f)
            barColor = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
        else
            barColor = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.38f / 2, window.getSize().y * 1.78f / 2));
        ImGui::Begin("Player HP", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);
        ImGui::Text("HP:");
        ImGui::PushStyleColor(ImGuiCol_PlotHistogram, barColor);
        ImGui::ProgressBar(hp, ImVec2(150.f, 20.f));
        ImGui::PopStyleColor();
        ImGui::End();

        hp = enemy1->gethealth() / enemy1->getmaxHealth();
        if (hp > 0.6f)
            barColor = ImVec4(0.0f, 1.0f, 0.0f, 0.7f);
        else if (hp > 0.3f)
            barColor = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
        else
            barColor = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 1.815f / 2, window.getSize().y * 0.67f / 2));
        ImGui::Begin("Enemy_1 HP", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);
        ImGui::Text("HP:");
        ImGui::PushStyleColor(ImGuiCol_PlotHistogram, barColor);
        ImGui::ProgressBar(hp, ImVec2(100.f, 20.f));
        ImGui::PopStyleColor();
        ImGui::End();

        hp = enemy2->gethealth() / enemy2->getmaxHealth();
        if (hp > 0.6f)
            barColor = ImVec4(0.0f, 1.0f, 0.0f, 0.7f);
        else if (hp > 0.3f)
            barColor = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
        else
            barColor = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 1.815f / 2, window.getSize().y * 0.85f / 2));
        ImGui::Begin("Enemy_2 HP", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);
        ImGui::Text("HP:");
        ImGui::PushStyleColor(ImGuiCol_PlotHistogram, barColor);
        ImGui::ProgressBar(hp, ImVec2(100.f, 20.f));
        ImGui::PopStyleColor();
        ImGui::End();


        window.draw(Grid_Background_sprite);
        window.draw(background);
        window.draw(player_sprite);
        if(enemy1->isAlive())
            window.draw(Witch_sprite);
        if(enemy2->isAlive())
            window.draw(Goblin_sprite);
        window.draw(Circle_sprite);
        window.draw(weapon_circle_sprite);
        window.draw(show_sprite);
        window.draw(Weapon_sprite);
        window.draw(Attack_Button_sprite);
        window.draw(Square_sprite);
        window.draw(Square2_sprite);
        window.draw(show_enemy);
        window.draw(show_enemy2);
        if (animating_player)
            window.draw(Animation_sprite);


        ImGui::SFML::Render(window);
        window.display();

        if (!enemy1->isAlive() && !animating_player && !enemy2->isAlive())
        {
            currentstate = Level3;
            return true;
        }
        if (!player->isAlive())
        {
            return false;
        }
    }
}

bool Game::Level_Complete(RenderWindow& window, Sprite& Level_Complete_sprite, Character* player, GameState& currentstate) {
    
    bool next = false, exit = false;
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

        ImGuiStyle& style = ImGui::GetStyle();
        style.FrameRounding = 20.0f;
        style.FramePadding = ImVec2(15, 10);
        style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
        style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.1f);
        style.Colors[ImGuiCol_ButtonActive] = ImVec4(1.f, 1.f, 1.f, 0.2f);

        float buttonWidth = window.getSize().x * 0.57f;
        float buttonHeight = window.getSize().y * 0.26f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.4715f - buttonWidth / 2, window.getSize().y * 0.527f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));


        ImGui::Begin("Next Level", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            next = true;
        }

        ImGui::End();

        buttonWidth = window.getSize().x * 0.57f;
        buttonHeight = window.getSize().y * 0.23f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.4715f - buttonWidth / 2, window.getSize().y * 0.81f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("Save & Exit", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            ofstream file("Save.txt", ios::out | ios::trunc);
			if (file.is_open())
			{
				file << player->gettype() << ';';
				file << player->getweaponname() << ';';
                if(currentstate == Level1)
					file << "Level1" << endl;
				else if (currentstate == Level2)
					file << "Level2" << endl;
				else if (currentstate == Level3)
					file << "Level3" << endl;
				else if (currentstate == Level4)
					file << "Level4" << endl;
				else if (currentstate == Level5)
					file << "Level5" << endl;
				file.close();
			}
            exit = true;
        }

        ImGui::End();

        window.draw(Level_Complete_sprite);

        ImGui::SFML::Render(window);
        window.display();
        if (next)
            return true;
        if (exit)
            return false;
    }
}

bool Game::Level_Failed(RenderWindow &window, Sprite &Level_Failed_sprite, Character *player, GameState &currentstate) {

    bool next = false, exit = false;
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

        ImGuiStyle& style = ImGui::GetStyle();
        style.FrameRounding = 20.0f;
        style.FramePadding = ImVec2(15, 10);
        style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
        style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.1f);
        style.Colors[ImGuiCol_ButtonActive] = ImVec4(1.f, 1.f, 1.f, 0.2f);

        float buttonWidth = window.getSize().x * 0.57f;
        float buttonHeight = window.getSize().y * 0.26f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.4715f - buttonWidth / 2, window.getSize().y * 0.527f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));


        ImGui::Begin("Retry Level", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            next = true;
        }

        ImGui::End();

        buttonWidth = window.getSize().x * 0.57f;
        buttonHeight = window.getSize().y * 0.23f;
        ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.4715f - buttonWidth / 2, window.getSize().y * 0.81f - buttonHeight / 2));
        ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));

        ImGui::Begin("Save & Exit", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

        if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
        {
            ofstream file("Save.txt", ios::out | ios::trunc);
            if (file.is_open())
            {
                file << player->gettype() << ';';
                file << player->getweaponname() << ';';
                if (currentstate == Level1)
                    file << "Level1" << endl;
                else if (currentstate == Level2)
                    file << "Level2" << endl;
                else if (currentstate == Level3)
                    file << "Level3" << endl;
                else if (currentstate == Level4)
                    file << "Level4" << endl;
                else if (currentstate == Level5)
                    file << "Level5" << endl;
                file.close();
            }
            exit = true;
        }

        ImGui::End();

        window.draw(Level_Failed_sprite);

        ImGui::SFML::Render(window);
        window.display();
        if (next)
            return true;
        if (exit)
            return false;
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

    buttonWidth = window.getSize().x * 0.255f;
    buttonHeight = window.getSize().y * 0.117f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.495f - buttonWidth / 2, window.getSize().y * 0.62f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));


    ImGui::Begin("CONTINUE", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
		ifstream file("Save.txt");
		if (file.is_open())
            currentstate = Continue;
        file.close();
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