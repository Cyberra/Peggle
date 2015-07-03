#pragma once

#include "RessourceIDs.h"
#include "AllBumpers.h"
#include "CCircle.h"

class Bumper :
	public AllBumpers
{
public:
	Bumper();
	~Bumper();

	void Shout();
	void PlaceCollider();

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
};

