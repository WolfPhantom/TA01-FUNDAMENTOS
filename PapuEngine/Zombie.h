#pragma once
#include <string>
#include "SpriteBacth.h"
#include "GLTexture.h"
#include "ResourceManager.h"
#include<stdlib.h>
#include<time.h>
class Zombie
{
	glm::vec2 position;

	Color color;
	std::string textPath;
public:
	Zombie(std::string textPath);
	~Zombie();
	void draw(SpriteBacth& spritebatch);
	std::string gettextPath() { return textPath; };
};

