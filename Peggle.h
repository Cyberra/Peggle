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
#include "StartScreen.h"

class Peggle :
	public Component
{
public:
	Peggle();
	~Peggle();

	void Update();
	void InitBumpers(int nbBumpers, int nbScoreBumpers);
	void PlaceBumpers();
	void InitGame();
	void CheckGameOver();
	void RestartGame();


private:
	std::vector<AllBumpers*> myBumpers;
	D3DXVECTOR3 bumperPos;

	StartScreen* startScreen;

	float bumperDistance;
	int nbBumpers;
	int nbScoreBumpers;
	int screenWidth;
	int screenHeight;
	bool gameLaunched;
	bool checkBalls;
	int deadBalls;

	Background* bkg;
	Canon* canon;
	Basket* basket;
};

