

#include "Bumper.h"

Bumper::Bumper()
	: Sprite(Texture::ID::Bumper)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mPos(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(mCenter);
	this->SetID(Components::Bumper);
	collider = new CCircle(this, mPos.x, mPos.y, mCenter.x * 2);
}

Bumper::~Bumper()
{

}

void Bumper::Shout()
{
	std::cout << "OH" << std::endl;
}