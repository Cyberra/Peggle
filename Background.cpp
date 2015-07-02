
#include "Background.h"

Background::Background()
	: Sprite(Texture::ID::Background)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(mCenter);
	SetRotationRad(0, 0, D3DX_PI);
}

Background::~Background()
{
	
}
