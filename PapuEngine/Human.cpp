#include "Human.h"



Human::Human( int tipo, glm::vec2 position)
{
	srand(time(NULL));
	
	this->position = position;
	this->tipo = tipo;
}




Human::~Human()
{
}

void Human::draw(SpriteBacth& spritebatch)
{
	static int textureID;
	switch (tipo)
	{
	case 1:textureID= ResourceManager::getTexture("Textures/Paper_Mario_.png").id;
			break;
	case 2:textureID = ResourceManager::getTexture("Textures/zonbie.png").id;
		break;
	case 3:textureID = ResourceManager::getTexture("Textures/circle.png").id;
		break;
	case 4:textureID = ResourceManager::getTexture("Textures/red_bricks.png").id;
		break;
	case 5:textureID = ResourceManager::getTexture("Textures/cloud.png").id;
		break;
	case 6:textureID = ResourceManager::getTexture("Textures/sefirot.png").id;
		break;
	default:
		break;
	}
	/*static int textureID =
		ResourceManager::getTexture(textPath).id;*/
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	glm::vec4 destRect(position.x, position.y, HUMAN_WIDTH, HUMAN_WIDTH);
	spritebatch.draw(destRect, uvRect, textureID, 0.0f, color);
}
