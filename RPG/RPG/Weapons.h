#pragma once

class Weapons {
private:
	int Attk = 0; 
	float Crit = 0; 

public:
	
	void setAttk(int atk) {
		Attk = atk; 
	}

	void setCrit(float crit) {
		Crit = crit;
	}

	int getAttk() {
		return Attk;
	}

	float getCrit() {
		return Crit;	
	}
};