#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"
#include "CCircle.h"

class AllBumpers :
	public Sprite
{
public:
	AllBumpers();
	AllBumpers(Texture::ID id);
	~AllBumpers();

	CCircle* collider;
};

