#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"
#include "Ball.h"
#include "HUDLives.h"

class Canon :
	public Sprite
{
public:
	Canon();
	~Canon();

	void Update();
	void Rotate(float dt);
	void Shoot(float dt);
	void AddLife(float dt);

	std::vector<Ball*> myBalls;
	int nbBalls;

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 shotDirection;
	float shotRot;
	float canonRot;
	const float ROTATION_SPEED; 

	bool isShot;
	float waitTime;
	bool isGainLife;
	float waitGainLife;

	Ball* ball;
	HUDLives* hudLives;
};

