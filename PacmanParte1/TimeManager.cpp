#include "TimeManager.h"

TimeManager& TimeManager::getInstance() 
{
	static TimeManager instance;
	return instance;
}

void TimeManager::nextFrame()
{
	frameCount++;
	auto elapsedTime = std::chrono::high_resolution_clock::now() - start;

	deltaTime = (float)std::chrono::duration_cast<std::chrono::milliseconds>(elapsedTime).count();
	
	deltaTime /= 1000.0f;

	time += deltaTime;

	start = std::chrono::high_resolution_clock::now();
	
	contador += deltaTime;

}

bool TimeManager::Contador()
{
	if (TimeManager::getInstance().contador > 10)
	{
		contador;
		return true;
	}
	else
	{
		return false;
	}
}

