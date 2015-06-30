
#include "Canon.h"


Canon::Canon()
	: Collidable(Texture::ID::Canon)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mRotation(D3DX_PI / 2)
	, ROTATION_SPEED(0.1)
	, isShot(false)
	, waitTime(0.f)
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
	Shoot(dt);
}

void Canon::Shoot(float dt)
{
	if (isShot == true && waitTime <= 0.2f)
	{
		waitTime += dt;
	}
	else
	{
		isShot = false;
		waitTime = 0;
	}

	if (gDInput->keyPressed(DIKEYBOARD_SPACE) && isShot == false)
	{
		isShot = true;
		Ball* ball = new Ball();
		ball->SetPosition(0, gApp->GetParam().BackBufferHeight / 2);
		std::cout << "HEY" << std::endl;
	}
}

void Canon::Rotate(float dt)
{
	const float ROT_MIN = 0;
	const float ROT_MAX = 180;

	if (gDInput->keyDown(DIKEYBOARD_A) && mRotation >= ROT_MIN)
	{
		mRotation -= ROTATION_SPEED * dt * 180 / D3DX_PI;
		SetRotation(0, 0, mRotation);
	}

	if (gDInput->keyDown(DIKEYBOARD_D) && mRotation * 180 / D3DX_PI <= ROT_MAX)
	{
		mRotation += ROTATION_SPEED * dt * 180 / D3DX_PI;
		SetRotation(0, 0, mRotation);
	}
}

void Canon::Stop()
{

}