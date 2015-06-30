#pragma once

#include "Component.h"
#include "Sprite.h"
#include "RessourceIDs.h"

#include "Background.h"
#include "Ball.h"
#include "Bumper.h"
#include "Canon.h"
#include "Wall.h"
#include "Basket.h"

class Peggle :
	public Component
{
public:
	Peggle();
	~Peggle();

	void Start();
	void Update();
	void Draw();
	void Stop();

private:
	int distanceBetweenBumpers;
};

