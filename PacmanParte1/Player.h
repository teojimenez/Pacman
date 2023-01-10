#pragma once
#include "Map.h"
#include <time.h>
#include "GlobalResources.h"

class Player
{
public:
	COORD PlayerPosition;
	int player_points = 0, player_x = 1, player_y = 1, vidas = 3;
	char player_char = 'O';
private:

public:
	Player(COORD spawn);
	void Update(Map* pacman_map, GlobalResources::USER_INPUTS input, std::vector<Enemy> enemigos);
	void Draw();
	
};

