#pragma once
#include <string>
#include "SpriteBacth.h"
#include "GLTexture.h"
#include "ResourceManager.h"
#include<stdlib.h>
#include<time.h>
const int HUMAN_WIDTH = 60;

class Human 
{
	glm::vec2 position;
	int tipo;
	Color color;
	

public:
	Human(int tipo,glm::vec2 position);
	~Human();
	void draw(SpriteBacth& spritebatch);
	
};

