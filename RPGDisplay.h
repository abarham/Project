#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "Hero.h"
#include "Enemy.h"

class RPGDisplay
{
public:
	RPGDisplay();
	RPGDisplay(std::vector<Hero>, std::vector <Enemy>);
	~RPGDisplay();
	void display();
	void refresh();
	void displayEnemies();
	void displayHeroes();
private:
	std::vector<Hero> heroes;
	std::vector<Enemy> enemies;
	void displayOneEnemy();
	void displayTwoEnemies();
	void displayThreeEnemies();
	void displayOneHero();
	void displayTwoHeroes();
	void displayThreeHeroes();
	void drawLines(int numberOfCharaters);
	void drawEnemyNames(int numberOfCharacters);
	void drawHeroNames(int numberOfCharacters);
	void drawEnemyHP(int numberOfCharacters);
	void drawHeroHP(int numberOfCharacters);
	void drawHeroSP(int numberOfCharacters);

};

