#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"
#include "CCircle.h"

// What my ball knows
#include "Bumper.h"
#include "Basket.h"
#include "ScoreBumpers.h"

class Ball :
	public Sprite
{
public:
	Ball();
	Ball(D3DXVECTOR3 direction);
	~Ball();

	// Circle Collider
	CCircle* collider;

	void Update();
	void Move(float dt);

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
	D3DXVECTOR3 mDir;
	const float BALL_SPEED;
	
};

