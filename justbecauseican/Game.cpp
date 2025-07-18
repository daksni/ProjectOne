#include "Game.h"


void Game::delay(int delayTime) {
	std::this_thread::sleep_for(std::chrono::seconds(delayTime));
}

void Game::settingHowThePlayerShouldBeCalled(Player* player) {

	std::string setupName;

	std::cout << "Player's Name: ";
	std::getline(std::cin, setupName);

	while (setupName.empty()) {
		std::cout << "\nYou've given an incorrect input! Please try again.\nName: ";
		std::getline(std::cin, setupName);
	}

	player->setPlayerName(setupName);

}

void Game::settingThePlayerGender(Player* player) {

	const struct Gender {
		const std::string MALE = "1";
		const std::string FEMALE = "2";

		const int SELECT_MALE = 1;
		const int SELECT_FEMALE = 2;

	};

	Gender gender;

	std::string setupGender;

	std::cout << "\nType[1] for Male or [2] for Female: ";
	std::getline(std::cin, setupGender);

	while (setupGender.empty() || (setupGender != gender.MALE && setupGender != gender.FEMALE)) {
		std::cout << "\nYou've given an incorrect input! Please try again.\nType[1] for Male or [2] for Female: ";
		std::getline(std::cin, setupGender);
	}

	if (setupGender == gender.MALE) {
		player->setPlayerGender(gender.SELECT_MALE);
	}
	else if (setupGender == gender.FEMALE) {
		player->setPlayerGender(gender.SELECT_FEMALE);
	}

}

void Game::settingThePlayerClass(Player* player) {
	//TODO: based on chosen class, alter gameplay attr.
	//TODO: make player attr at Player.h and Player.cpp
}

int Game::run() {

	Player* player = new Player();
	Pronouns* pronouns = new Pronouns();

	std::cout << "Hello, welcome to this prototype!\n";

	settingHowThePlayerShouldBeCalled(player);

	std::cout << "\nIs " << player->getPlayerName() << " male or female?";

	settingThePlayerGender(player);

	//This may stay but somewhere else.
	std::cout << "\nGreat, now what class does " << pronouns->getLSubject(player) << " belongs to?" << "\n[CLASSES TO CHOOSE]";

	settingThePlayerClass(player);

	delete player;
	player = nullptr;

	delete pronouns;
	pronouns = nullptr;

	return 0;

}
