#pragma once

#include <string>


class Player
{
private:

	//Player Attribiutes || Statuses
	int playerLife;
	std::string playerName;
	bool isPlayerDead;
	int playerGender;

public:

	//Getter arguments.
	int getPlayerLife() const;
	std::string getPlayerName() const;
	bool getIsPlayerDead() const;
	int getPlayerGender() const;

	//Setter arguments.
	void setPlayerLife(int life);
	void setPlayerName(std::string name);
	void setIsPlayerDead(bool localIsPlayerDead);
	void setPlayerGender(int gender);
};

