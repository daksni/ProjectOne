#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <string>

#include "Player.h"
#include "Pronouns.h"

class Game
{
public:

	void delay(int delayTime);
	void settingHowThePlayerShouldBeCalled(Player* player);
	void settingThePlayerGender(Player* player);
	void settingThePlayerClass(Player* player);

	int run();

};

