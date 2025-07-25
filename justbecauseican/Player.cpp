//This code is property of Elder Bone Software.
//Developed by Lead Engine Programmer: Daniel M. S. A.
//The usage of this code freely is allowed as long as the author is dued credited.

#include "Player.h"

//Getter arguments
int Player::getPlayerLife() const{
	return playerLife;
}

std::string Player::getPlayerName() const{
	return playerName;
}

bool Player::getIsPlayerDead() const{
	return isPlayerDead;
}

int Player::getPlayerGender() const {
	return playerGender;
}

int Player::getPlayerClass() const {
	return playerClass;
}

//Setter arguments

void Player::setPlayerLife(int life) {
	playerLife = life;
}

void Player::setPlayerName(std::string name) {
	playerName = name;
}

void Player::setIsPlayerDead(bool localIsPlayerDead) {
	isPlayerDead = localIsPlayerDead;
}

void Player::setPlayerGender(int gender) {
	playerGender = gender;
}

void Player::setPlayerClass(int pClass) {
	playerClass = pClass;
}

//Worth noting: there shall be more attr to change... for now though
//that is all my lazy ass has built.
void Player::setPlayerAttributesAccordinglyToClass() {
	switch (Player::getPlayerClass()) {
	case PlayerClass::KNIGHT:
		Player::setPlayerLife(1000);
		break;

	case PlayerClass::WIZARD:
		Player::setPlayerLife(800);
		break;

	case PlayerClass::BARD:
		Player::setPlayerLife(800);
		break;

	case PlayerClass::NOBLE:
		Player::setPlayerLife(500);
		break;

	case PlayerClass::WRETCH:
		Player::setPlayerLife(300);
		break;
	}
}

void Player::vomitAllAttr() {

	std::string gender;
	std::string pClass;
	std::string isDead;

	if (Player::getPlayerGender() == 1) {
		gender = "Male";
	}
	else if (Player::getPlayerGender() == 2) {
		gender = "Female";
	}

	switch (Player::getPlayerClass()) {
	case PlayerClass::KNIGHT:
		pClass = "Knight";
		break;

	case PlayerClass::WIZARD:
		pClass = "Wizard";
		break;

	case PlayerClass::BARD:
		pClass = "Bard";
		break;

	case PlayerClass::NOBLE:
		pClass = "Noble";
		break;

	case PlayerClass::WRETCH:
		pClass = "Wretch";
		break;
	}

	if (Player::getIsPlayerDead() == true) {
		isDead = "Dead";
	}
	else if (Player::getIsPlayerDead() == false) {
		isDead = "Alive";
	}

	std::cout << "\n\nHere are your attributes:\nName: " << Player::getPlayerName() << "\n" <<
		"Gender: " << gender << "\n" <<
		"Class: " << pClass << "\n" <<
		"The player is: " << isDead << "\n" <<
		"Player life: " << Player::getPlayerLife();
}