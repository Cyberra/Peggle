#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"
#include "Ball.h"

class Canon :
	public Sprite
{
public:
	Canon();
	~Canon();

	void Update();
	void Rotate(float dt);
	void Shoot(float dt);

	int nbBalls;
private:
	std::vector<Ball*> myBalls;
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 shotDirection;
	float shotRot;
	float canonRot;
	const float ROTATION_SPEED; 
	bool isShot;
	float waitTime;

	Ball* ball;
};

