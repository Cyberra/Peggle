#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"

class Ball :
	public Sprite
{
public:
	Ball();
	Ball(D3DXVECTOR3 direction);
	~Ball();

	void Update();
	void Move(float dt);

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
	D3DXVECTOR3 mDir;
	const float BALL_SPEED;
	
};

