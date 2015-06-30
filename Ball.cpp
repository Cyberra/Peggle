
#include "Ball.h"


Ball::Ball()
	: Collidable(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(&mCenter);
}

Ball::~Ball()
{

}
