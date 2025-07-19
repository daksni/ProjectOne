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