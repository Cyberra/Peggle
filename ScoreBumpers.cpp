
#include "ScoreBumpers.h"

ScoreBumpers::ScoreBumpers()
	: AllBumpers(Texture::ID::ScoreBumper)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mPos(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(mCenter);
	this->SetID(Components::ScoreBumper);
}

ScoreBumpers::~ScoreBumpers()
{

}

void ScoreBumpers::Hit()
{
	isVisible = false;
	SetActive(false);
	collider->SetPosition(0, -1000);
}