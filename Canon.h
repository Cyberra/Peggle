#pragma once

#include "Collidable.h"
#include "Sprite.h"
#include "Ball.h"

class Canon :
	public Collidable
{
public:
	Canon();
	~Canon();

	void Update();
	void Rotate(float dt);
	void Shoot(float dt);

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 shotDirection;
	float shotRot;
	float canonRot;
	const float ROTATION_SPEED; 
	bool isShot;
	float waitTime;
};

