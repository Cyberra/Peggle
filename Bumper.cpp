

#include "Bumper.h"

Bumper::Bumper()
	: Collidable(Texture::ID::Bumper)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mPos(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(mCenter);
	mBumper.push_back(this);
}

Bumper::~Bumper()
{

}

void Bumper::Update()
{
	std::cout << mBumper.size() << std::endl;
}