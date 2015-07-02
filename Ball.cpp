
#include "Ball.h"


Ball::Ball()
	: Collidable(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, BALL_SPEED(250)
	, mPos()
	, mDir()
{
	SetPivot(&mCenter);
}

Ball::Ball(D3DXVECTOR3 direction)
	: Collidable(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, BALL_SPEED(250)
	, mPos(0, gApp->GetParam().BackBufferHeight / 2, 0)
	, mDir(direction.x, direction.y, 0)
{
	SetPivot(&mCenter);
}

Ball::~Ball()
{

}

void Ball::Update()
{
	float dt = gTimer->GetDeltaTime();

	Move(dt);
}

void Ball::Move(float dt)
{
	mPos += mDir * BALL_SPEED * dt;
	SetPosition(mPos.x, mPos.y);
}