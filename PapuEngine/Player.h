#pragma once
#include "Agent.h"
#include "InputManager.h"

class Player : public Agent
{
private:
	InputManager* inputManager;
public:
	Player();
	~Player();
	void init(float _speed, 
			glm::vec2 _position, InputManager* _inputManager);
	void update();
};

