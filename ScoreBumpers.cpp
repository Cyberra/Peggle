
#include "ScoreBumpers.h"

ScoreBumpers::ScoreBumpers()
	: Sprite(Texture::ID::ScoreBumper)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mPos(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(mCenter);
}

ScoreBumpers::~ScoreBumpers()
{

}
