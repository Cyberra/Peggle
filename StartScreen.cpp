
#include "StartScreen.h"

StartScreen::StartScreen()
	: Sprite(Texture::ID::StartScreen)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
{
	SetPivot(mCenter);
	SetRotationDeg(180, 0, 180);
	SetPosition(0, 0);
}

StartScreen::~StartScreen()
{

}
