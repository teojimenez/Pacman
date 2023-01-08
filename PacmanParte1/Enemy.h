#pragma once
#include "Map.h"
#include <time.h>
#include <vector>

class Enemy
{
public:
	COORD position;



private:
	char character = 'E';
	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::DARK_RED;
	ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::CONSOLE_COLOR::BLACK;

public:
	Enemy(COORD spawn);

	bool Logic(Map* pacman_map, COORD playerPosition);
	void Draw();



};

