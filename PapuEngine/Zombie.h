#pragma once
#include "Agent.h"
class Zombie :public Agent
{
public:
	Zombie();
	~Zombie();

	void init(float speed, glm::vec2 position);

	void update(const std::vector<std::string>& levelData);
};

