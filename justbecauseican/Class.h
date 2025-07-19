//This code is property of Elder Bone Software.
//Developed by Lead Engine Programmer: Daniel M. S. A.
//The usage of this code freely is allowed as long as the author is dued credited.

#pragma once
#include "Player.h"

class Class
{
private:
	const enum PlayerClass {
		KNIGHT = 1,
		WIZARD = 2,
		BARD = 3,
		NOBLE = 4,
		WRETCH = 5
	};
public:
	void Knight(Player* player);
	void Wizard(Player* player);
	void Bard(Player* player);
	void Noble(Player* player);
	void Wretch(Player* player);
};

