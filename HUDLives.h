#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"

class HUDLives :
	public Sprite
{
public:
	HUDLives();
	~HUDLives();

	void UpdateLives(int nbLives);

private:
	D3DXVECTOR3 mCenter;
	std::vector<Sprite*> myNumbers;

	int livesLeft;
};

