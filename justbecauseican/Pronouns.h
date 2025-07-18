#pragma once

#include <string>
#include "Player.h"

class Pronouns
{
private:
	//Male Lowercase and Captalized pronouns.
	const std::string mCSubject = "He";
	const std::string mCObject = "Him";
	const std::string mCPossesive = "His";

	const std::string mLSubject = "he";
	const std::string mLObject = "him";
	const std::string mLPossesive = "his";

	//Female Lowercase and Captalized pronouns.
	const std::string fCSubject = "She";
	const std::string fCObject = "Her";

	const std::string fLSubject = "she";
	const std::string fLObject = "her";

public:
	//Getters.
	std::string getCSubject(Player* player) const;
	std::string getCObject(Player* player) const;
	std::string getCPossesive(Player* player) const;

	std::string getLSubject(Player* player) const;
	std::string getLObject(Player* player) const;
	std::string getLPossesive(Player* player) const;


};

