
#include "Canon.h"


Canon::Canon()
	: Collidable(Texture::ID::Canon)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mRotation(D3DX_PI / 2)
	, ROTATION_SPEED(0.1)
{
	SetPivot(&mCenter);
	SetRotation(0, 0, mRotation);
	SetPosition(0, gApp->GetParam().BackBufferHeight / 2);
}

Canon::~Canon()
{

}

void Canon::Start()
{

}

void Canon::Update()
{
	float dt = gTimer->GetDeltaTime();

	Rotate(dt);
}

void Canon::Rotate(float dt)
{
	const float ROT_MIN = 0;
	const float ROT_MAX = 180;

	if (gDInput->keyDown(DIKEYBOARD_A) && mRotation >= ROT_MIN)
	{
		std::cout << mRotation * 180 / D3DX_PI << std::endl;
		mRotation -= ROTATION_SPEED * dt * 180 / D3DX_PI;
		SetRotation(0, 0, mRotation);
	}

	if (gDInput->keyDown(DIKEYBOARD_D) && mRotation * 180 / D3DX_PI <= ROT_MAX)
	{
		std::cout << mRotation * 180 / D3DX_PI << std::endl;
		mRotation += ROTATION_SPEED * dt * 180 / D3DX_PI;
		SetRotation(0, 0, mRotation);
	}
}

void Canon::Stop()
{

}