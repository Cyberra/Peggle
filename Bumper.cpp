

#include "Bumper.h"

Bumper::Bumper()
	: AllBumpers(Texture::ID::Bumper)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mPos(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(mCenter);
	this->SetID(Components::Bumper);
}

Bumper::~Bumper()
{

}

void Bumper::Shout()
{
	
}

void Bumper::PlaceCollider()
{

}