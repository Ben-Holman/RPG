#pragma once
#include <string>

class Item {
private:
	std::string itemName; 
	std::string Description;
	int itemCost = 0; 

public:
	// == SETTERS ==
	void setItemName(std::string name) {
		itemName = name;
	}

	void setItemDescription(std::string desc) {
		Description = desc;
	}

	void setCost(int cost) {
		itemCost = cost; 
	}

	// == GETTERS == 

	std::string getItemName() {
		return itemName;
	}

	std::string getItemDescription() {
		return Description;
	}

	int getItemCost() {
		return itemCost;
	}
};