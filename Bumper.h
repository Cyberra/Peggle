#pragma once

#include "Collidable.h"

class Bumper :
	public Collidable
{
public:
	Bumper();
	~Bumper();

private:
	D3DXVECTOR3 mCenter;
};

