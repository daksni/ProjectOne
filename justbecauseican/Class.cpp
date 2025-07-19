//This code is property of Elder Bone Software.
//Developed by Lead Engine Programmer: Daniel M. S. A.
//The usage of this code freely is allowed as long as the author is dued credited.

#include "Class.h"

void Class::setAttributesAccordinglyToPlayerClassOfChoice(Player* player) {
	switch (player->getPlayerClass()) {
	case PlayerClass::KNIGHT:
		//do smth
		break;
	case PlayerClass::WIZARD:
		//do smth
		break;
	case PlayerClass::BARD:
		//do smth
		break;
	case PlayerClass::NOBLE:
		//do smth
		break;
	case PlayerClass::WRETCH:
		//do smth
		break;
	}
}

