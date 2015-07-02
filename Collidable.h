#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

class Collidable :
	public Sprite
{
public:
	Collidable();
	Collidable(Texture::ID id);
	~Collidable();

private:
	
};