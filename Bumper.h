#pragma once

#include "Collidable.h"
#include "list"

class Bumper :
	public Collidable
{
public:
	Bumper();
	~Bumper();

	void Update();

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
	std::list <Bumper*> mBumper;
};

