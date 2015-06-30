#pragma once

#include "Collidable.h"

class Ball :
	public Collidable
{
public:
	Ball();
	Ball(float direction);
	~Ball();

	void Update();
	void Move(float dt);

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
	D3DXVECTOR3 mDir;
	float direction;
	const float BALL_SPEED;
	
};

