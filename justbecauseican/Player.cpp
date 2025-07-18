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