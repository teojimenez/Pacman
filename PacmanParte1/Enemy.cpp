#include "Enemy.h"
#include "TimeManager.h"
#include <cstdlib>

Enemy::Enemy(COORD spawn)
{
	position = spawn;
}

bool Enemy::Logic(Map* pacman_map, COORD playerPosition)
{
	if (TimeManager::getInstance().contador > 5)
	{
		foreground = foreground_Vulnerable;
	}
	else 
	{
		foreground = foreground_Normal;

	}


	int dir = rand() % 4; //Numero random de 0 a 4
	COORD position_new = position;
	switch (dir)
	{
	case 0:
		position_new.X++;
		break;
	case 1:
		position_new.X--;
		break;
	case 2:
		position_new.Y++;
		break;
	case 3:
		position_new.Y--;
		break;
	default:
		break;
	}

	if (position_new.X < 0)
	{
		position_new.X = pacman_map->Width - 1;
	}
	position_new.X %= pacman_map->Width;
	if (position_new.X < 0)
	{
		position_new.Y = pacman_map->Height - 1;
	}
	position_new.Y %= pacman_map->Height;

	if (pacman_map->GetTile(position_new.X, position_new.Y)!= Map::MAP_WALL)
	{
		position = position_new;
	}

	return position.X == playerPosition.X && position.Y == playerPosition.Y;
}


void Enemy::Draw()
{
	ConsoleUtils::Console_SetPos(position);
	ConsoleUtils::Console_SetColor(foreground, background);
	std::cout << character;
	
}
