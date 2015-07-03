#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"
#include "CCircle.h"

class Bumper :
	public Sprite
{
public:
	Bumper();
	~Bumper();

	void Shout();

	CCircle* collider;

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
};

