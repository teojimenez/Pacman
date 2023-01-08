#pragma once
#include <chrono>
#include <stdlib.h>

class TimeManager
{
	std::chrono::high_resolution_clock::time_point start =
		std::chrono::high_resolution_clock::now();
public:
	static TimeManager& getInstance();

	unsigned int frameCount;
	float time, deltaTime;
	int spawn = 0;
	div_t residuo;
	void nextFrame();
};

