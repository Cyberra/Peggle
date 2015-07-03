#pragma once

#include "RessourceIDs.h"
#include "AllBumpers.h"

class ScoreBumpers :
	public AllBumpers
{
public:
	ScoreBumpers();
	~ScoreBumpers();

	void Hit();

private:
	D3DXVECTOR3 mCenter;
	D3DXVECTOR3 mPos;
};

