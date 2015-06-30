#pragma once

#include "Collidable.h"

class Basket :
	public Collidable
{
public:
	Basket();
	~Basket();

private:
	D3DXVECTOR3 mCenter;
};

