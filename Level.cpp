/*#include "Level.h"
#include "Object.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>

using namespace std;

Level::Level()
{

}

void Level::load(string fileName, Player &player)
{

	//Loads Level
	ifstream file;
	//Pass through the file name to open that level
	file.open(fileName);

	string line;

	//Takes each line of the file
	while (getline(file, line))
	{
		levelData.push_back(line);
	}
	file.close();

	//Process level
	char tile;
	for (int i = 0; i < levelData.size(); i++)
	{
		for (int j = 0; j < levelData[i].size(); j++)
		{
			tile = levelData[i][j];

			switch (tile)
			{
			case 'P':
				//Set Player Position
				player.setPosition(j, i);
				break;
			case 'E': //Enemy
				enemies.push_back(jnEnemy("Enemy", tile, 1, 3, 1, 5, 10)); //Enemy Stats
				enemies.back().setPosition(j, i); //Sets position
				break;
			}
		}
	}
}*/