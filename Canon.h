#pragma once

#include "Collidable.h"
#include "Sprite.h"

class Canon :
	public Collidable
{
public:
	Canon();
	~Canon();

	void Start();
	void Update();
	void Rotate(float dt);
	void Stop();

private:
	D3DXVECTOR3 mCenter;
	float mRotation;
	const float ROTATION_SPEED;
};

