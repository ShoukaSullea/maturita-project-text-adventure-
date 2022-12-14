#pragma once


#include <string>
class Character
{
public:
	Character();

	void setNAME() {name = getNAME();}
	std::string getNAME() const {return name;}
	
	void setHP() {hp = getHP();}
	int getHP() const {return hp;}

	void setMAXHP() {maxHp = getMAXHP();}
	int getMAXHP() const {return maxHp; }

	void setDMG() {dmg = getDMG();}
	int getDMG() const {return dmg; }

	void setDEFENSE() {defense = getDEFENSE();}
	int getDEFENSE() const {return defense;}

	void setMAGIC() { magic = getMAGIC();}
	int getMAGIC() const { return magic; }

private:
	std::string name;
	int hp;
	int maxHp;
	int dmg;
	int defense;
	int magic;
};