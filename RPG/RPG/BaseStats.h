#pragma once
class BaseStats {
private:
	int Str = 0; 
	int Dex = 0;
	int Int = 0; 
	int Const = 0;
	int Wis = 0;
	int something = 0;

public: 

	void setStr(int s) {
		Str = s;
	}

	void setDex(int d) {
		Dex = d;
	}

	void setInt(int i) {
		Int = i; 
	}

	void setConst(int c) {
		Const = c;
	}

	void setWis(int w) {
		Wis = w;
	}

	void setSomething(int Something) {
		something = Something;
	}

	int getStr() {
		return Str;
	}

	int getDex() {
		return Dex;
	}

	int getInt() {
		return Int;
	}

	int getConst() {
		return Const;
	}

	int getWis() {
		return Wis; 
	}

	int getSomething() {
		return something; 
	}


};

