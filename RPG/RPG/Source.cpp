// == MY INCLUDED FILES == 
#include "BaseStats.h"
#include "Weapons.h"
#include "Items.h"
#include "Player.h"
#include "Enemy.h"
#include "ChangeStats.h"

// == C++ INCLUDES == 
#include <iostream>
#include <cmath>
#include <string>


void choosePlayerRole();
void printClasses();
void changeStats();
int main() {
	choosePlayerRole();
	std::cout << std::endl;
	changeStats();  
}

void choosePlayerRole() {
	using std::cout;
	using std::cin;
	using std::endl;
//-----------------------
	//Create Player Object of Class Player
	Player Player; 
	std::string roleName; 
	std::string PlayerName; 
	cout << "Enter Your Name: " << endl;
	getline(cin, PlayerName);
	cout << endl;
	Player.setPlayerName(PlayerName); 
	cout << "Choose Your Role" << endl;
	printClasses();
	cin >> roleName; 
	cout << endl;
	if (roleName == ("Warrior")) {
		cout << "Player Name: " << Player.getPlayerName() << endl;
		//cout << Player.getPlayerName() << endl;
		Player.setWarrior();
		Player.getWarrior();
	}
	if (roleName == "Paladin") {
		cout << "Player Name: " << Player.getPlayerName() << endl;
		//cout << Player.getPlayerName() << endl;
		Player.setPaladin();
		Player.getPaladin(); 
	}
	if (roleName == "Rogue") {
		cout << "Player Name: " << Player.getPlayerName() << endl;
		Player.setRogue();
		Player.getRogue();
	}



	
}

void printClasses() {
	using std::cout;
	using std::endl;

	cout << "Warrior" << endl;
	cout << "Paladin" << endl;
	cout << "Rogue" << endl;
	cout << endl;
}


