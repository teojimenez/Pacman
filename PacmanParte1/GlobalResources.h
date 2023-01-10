#pragma once
#include "Map.h"
#include "Enemy.h"
#include "Player.h"
class GlobalResources {

public:

	enum USER_INPUTS { NONE, UP, DOWN, RIGHT, LEFT, QUIT };
	USER_INPUTS input = USER_INPUTS::NONE;
	Map pacman_map = Map();
	std::vector<Enemy> enemigos = std::vector<Enemy>();
	int enemy_count = 0;
};
