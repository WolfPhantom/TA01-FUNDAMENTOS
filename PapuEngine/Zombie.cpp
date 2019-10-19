#include "Zombie.h"



Zombie::Zombie(std::string textPath)
{
	this->textPath = textPath;
}


Zombie::~Zombie()
{
}

void Zombie::draw(SpriteBacth& spritebatch)
{
	static int textureID =
		ResourceManager::getTexture(textPath).id;
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	glm::vec4 destRect(150.0f, 130.0f, 70.0f, 70.0f);
	spritebatch.draw(destRect, uvRect, textureID, 0.0f, color);
}
