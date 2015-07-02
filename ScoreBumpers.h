#pragma once

#include "RessourceIDs.h"
#include "Sprite.h"

class ScoreBumpers :
	public Sprite
{
public:
	ScoreBumpers();
	~ScoreBumpers();

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
};

