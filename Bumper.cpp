

#include "Bumper.h"

Bumper::Bumper()
	: Collidable(Texture::ID::Bumper)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(&mCenter);
}

Bumper::~Bumper()
{

}