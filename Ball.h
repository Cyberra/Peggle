#pragma once
#include "Collidable.h"
class Ball :
	public Collidable
{
public:
	Ball();
	~Ball();

private:
	D3DXVECTOR3 mCenter;
};

