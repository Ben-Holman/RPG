#pragma once

#include "BaseStats.h"

#include <string>
#include <iostream>
class changeStats : public BaseStats {
private:
	int numOfPoints = 10;
	int addStat = 0;
	char ans;
	std::string choice;

public:

	void setNumOfPoints(int n) {
		numOfPoints = n;
	}

	void setAddStat(int a) {
		addStat = a;
	}

	char setAns(char s) {
		ans = s;
	}

	void setChoice(std::string Choice) {
		choice = Choice;
	}


	void ChangeStats() {
		using std::cout;
		using std::cin;
		using std::endl;
		int numOfPoints = 10;
		char ans;
		std::string choice;
		int addStat = 0;
		cout << "Would you like to Change your Role's Stats?" << endl;
		cin >> ans;
		if (ans != 'n' && ans != 'N') {
			cout << "Which Stats Would You Like To Change?" << endl;
			cout << endl;
			cout << "\t\t Points remaning: " << numOfPoints << endl;
		}
		cout << "Type In The Acronym:" << endl;
		cout << "Strength (Str)" << endl;
		cout << "Dexterity (Dex)" << endl;
		cout << "Intelligence (Int)" << endl;
		cout << "Constitution (Const)" << endl;
		do {
			if (choice == "Str") {
				cout << "How Many Points Would You Like To Add?" << endl;
				cout << "Strength Stat is: ";
				cin >> addStat;
				//setStr() = setStr() + addStat;
				//numOfPoints - addStat;
				cout << "You Have " << numOfPoints << " Remaining" << endl;
			}
		} while (numOfPoints > 0);

	}

};
