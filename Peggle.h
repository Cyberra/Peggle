#pragma once

#include "Component.h"
#include "Sprite.h"
#include "RessourceIDs.h"
#include "algorithm"

#include "Background.h"
#include "Ball.h"
#include "Bumper.h"
#include "Canon.h"
#include "Basket.h"
#include "ScoreBumpers.h"
#include "AllBumpers.h"

class Peggle :
	public Component
{
public:
	Peggle();
	~Peggle();

	void Update();
	void InitBumpers(int nbBumpers, int nbScoreBumpers);
	void PlaceBumpers();


private:
	std::vector<AllBumpers*> myBumpers;
	D3DXVECTOR3 bumperPos;

	float bumperDistance;
	int nbBumpers;
	int nbScoreBumpers;
	int screenWidth;
};

