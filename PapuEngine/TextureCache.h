#pragma once
#include "GLTexture.h"
#include <map>
#include <string>
class TextureCache
{
	
	std::map<std::string, GLTexture> _textureMap;
public:
	TextureCache();
	~TextureCache();
	GLTexture getTexture(std::string texturePath);
};

