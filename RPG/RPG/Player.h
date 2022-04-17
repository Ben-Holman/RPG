#pragma once
#include <string>
#include "BaseStats.h"
#include "Weapons.h"
#include "Items.h"
#include "Role.h"

class Player : public BaseStats, public Weapons, public Item, public Role {
private:
	std::string playerName;
public:

	void setPlayerName(std::string PlayerName) {
		playerName = PlayerName; 
	}
	
	std::string getPlayerName() {
		return playerName;
	}


};