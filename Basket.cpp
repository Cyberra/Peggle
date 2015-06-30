
#include "Basket.h"


Basket::Basket()
	: Collidable(Texture::ID::Basket)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(&mCenter);
	SetRotation(0, 0, D3DX_PI);
}

Basket::~Basket()
{

}
