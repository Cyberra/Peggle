#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"

class StartScreen :
	public Sprite
{
public:
	StartScreen();
	~StartScreen();

private:
	D3DXVECTOR3 mCenter;
};

