#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

class Background :
	public Sprite
{
public:
	Background();
	~Background();

private:
	D3DXVECTOR3 mCenter;
};