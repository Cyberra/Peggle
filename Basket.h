#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"
#include "CRectangle.h"

class Basket :
	public Sprite
{
public:
	Basket();
	~Basket();

	void Update();
	void Move(float dt);

	CRectangle* collider;

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
	D3DXVECTOR3 goRight;
	D3DXVECTOR3 goLeft;
	bool movingRight;
	int posY;
	int screenWidth;
	const float MOVE_SPEED;
};

