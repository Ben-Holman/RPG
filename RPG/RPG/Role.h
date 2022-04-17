#pragma once
#include <string>
#include <iostream>
#include "BaseStats.h"

/*
* this class creates the Role that the character becomes. 
* The Role will take on the public values of the BaseStats class like Str, Dex etc. 
*/

class Role : public BaseStats {
private:
	std::string roleName; 
	std::string specialAbility;

public:

	void setRoleName(std::string role) {
		roleName = role;
	}

	void setSpecialAbility(std::string ability) {
		specialAbility = ability; 
	}
	
	std::string getRoleName() {
		return roleName;
	}

	std::string getSpecialAbility() {
		return specialAbility;
	}

	void setWarrior() {
		setRoleName("Warrior");
		setStr(7);
		setDex(3);
		setInt(4);
		setConst(5);
		setSpecialAbility("Rage");
	}

	void getWarrior() {
		using std::cout;
		using std::endl;
		cout << "Your Role Name is: " << getRoleName() << endl;
		cout << "Strength: " << getStr() << endl;
		cout << "Dexterity: " << getDex() << endl;
		cout << "Intelligence: " << getInt() << endl;
		cout << "Special Ability: " << getSpecialAbility(); 

	}

	void setPaladin() {
		setRoleName("Paladin");
		setStr(5);
		setDex(4);
		setInt(5);
		setConst(6);
		setSpecialAbility("Spearheaded");
	}

	void getPaladin() {
		using std::cout;
		using std::endl;
		cout << "Your Role Name is: " << getRoleName() << endl;
		cout << "Strength: " << getStr() << endl;
		cout << "Dexterity: " << getDex() << endl;
		cout << "Intelligence: " << getInt() << endl;
		cout << "Special Ability: " << getSpecialAbility();
	}

	void setRogue() {
		setRoleName("Rogue");
		setStr(4);
		setDex(7);
		setInt(5);
		setConst(5);
		setSpecialAbility("Shadow Strike");
	}

	void getRogue() {
		using std::cout;
		using std::endl;
		cout << "Your Role Name is: " << getRoleName() << endl;
		cout << "Strength: " << getStr() << endl;
		cout << "Dexterity: " << getDex() << endl;
		cout << "Intelligence: " << getInt() << endl;
		cout << "Special Ability: " << getSpecialAbility();
	}

	


};