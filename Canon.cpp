
#include "Canon.h"


Canon::Canon()
	: Sprite(Texture::ID::Canon)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, shotRot(0)
	, canonRot(D3DX_PI / 2)
	, ROTATION_SPEED(0.1)
	, isShot(false)
	, waitTime(0.f)
	, shotDirection(0.f, 0.f, 0.f)
{
	SetPivot(mCenter);
	SetRotationRad(0.f, 0.f, canonRot);
	SetPosition(0, gApp->GetParam().BackBufferHeight / 2);
}

Canon::~Canon()
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
	// Time between shots.
	if (isShot == true && waitTime <= 0.5f)
	{
		waitTime += dt;
	}
	else
	{
		isShot = false;
		waitTime = 0;
	}

	if (gDInput->keyDown(DIKEYBOARD_SPACE) && isShot == false)
	{
		isShot = true;
		shotDirection = { -sinf(shotRot), cosf(shotRot), 0.f };
		Ball* ball = new Ball(-shotDirection);
		ball->SetPosition(0, gApp->GetParam().BackBufferHeight / 2);
	}
}

void Canon::Rotate(float dt)
{
	const float ROT_MIN = 0;
	const float ROT_MAX = 180;

	if (gDInput->keyDown(DIKEYBOARD_A) && canonRot >= ROT_MIN)
	{
		canonRot -= ROTATION_SPEED * dt * 180 / D3DX_PI;
		shotRot -= ROTATION_SPEED * dt * 180 / D3DX_PI;
		SetRotationRad(0, 0, canonRot);
	}

	if (gDInput->keyDown(DIKEYBOARD_D) && canonRot * 180 / D3DX_PI <= ROT_MAX)
	{
		canonRot += ROTATION_SPEED * dt * 180 / D3DX_PI;
		shotRot += ROTATION_SPEED * dt * 180 / D3DX_PI;
		SetRotationRad(0, 0, canonRot);
	}
}