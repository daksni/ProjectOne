//This code is property of Elder Bone Software.
//Developed by Lead Engine Programmer: Daniel M. S. A.
//The usage of this code freely is allowed as long as the author is dued credited.

#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <string>


#include "Player.h"
#include "Pronouns.h"
#include "Class.h"

class Game
{
public:

	void delay(int delayTime);

	void settingHowThePlayerShouldBeCalled(Player* player);
	void settingThePlayerGender(Player* player);
	void settingThePlayerClass(Player* player, Pronouns* pronouns, Class* pClass);

	int run();

};

