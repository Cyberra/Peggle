#pragma once

#include "Collidable.h"

class Basket :
	public Collidable
{
public:
	Basket();
	~Basket();

	void Update();
	void Move(float dt);

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
	D3DXVECTOR3 goRight;
	D3DXVECTOR3 goLeft;
	bool movingRight;
	int screenWidth;
	const float MOVE_SPEED;
};

