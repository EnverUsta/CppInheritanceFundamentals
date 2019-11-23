#include <iostream>
#include <string>

//TODO List:
//Simple game where you fight monsters
//The goal of the game is to collect as much gold as you can before you die or get to level 20.
//Our program is going to consist of 3 classes:
//Creature
//Player
//Monster
//Player and Monster both inherit from Creature


class Creature{
protected:
	std::string m_name;
	char m_symbol;
	int m_health;
	int m_damage;
	int m_gold;

public:
	Creature(const std::string &name, char symbol, int health, int damage, int gold)
		:m_name(name), m_symbol(symbol), m_health(health), m_damage(damage), m_gold(gold)
	{}

	const std::string& getName()const{return m_name;}
	char getChar()const{return m_symbol;}
	int getHealth()const{return m_health;}
	int getDamage()const{return m_damage;}
	int getGold()const{return m_gold;}


	void reduceHealth(int reduce){m_health -= reduce;}
	bool isDead()const{return m_health <= 0;}
	void addGold(int gold){m_gold += gold;}
};


class Player: public Creature{
private:
	int m_level;

public:
	Player(const std::string &name)
		:Creature(name, '@', 10, 1, 0), m_level(1)
	{
	}

	void levelUp(int increase){
		++m_level;
		++m_damage;
	}

	int getLevel()const{return m_level;}
	bool hasWon()const{return m_level >= 20;}
};


class Monster: public Creature{
public:
	enum Type{
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES
	}
	struct MonsterData{
		std::string name;
		char symbol;
		int health;
		int damage;
		int gold;
	};

	static MonsterData monsterData[Monster::MAX_TYPES];

	Monster(Monster::Type t){}
	
}



Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{"dragon",'D',20, 4, 100},
	{"orc", 'o', 4, 2, 25},
	{"slime", 's', 1, 1, 10}

};




int main(){
	std::cout << "Enter your name: ";
	std::string playerName;
	std::cin >> playerName;
 
	Player p( playerName );
	std::cout << "Welcome, " << p.getName() << ".\n";
 
	std::cout << "You have " << p.getHealth() << " health and are carrying " << p.getGold() << " gold.\n";
} 


























