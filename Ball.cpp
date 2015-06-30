
#include "Ball.h"


Ball::Ball()
	: Collidable(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, BALL_SPEED(20)
	, direction()
	, mPos(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mDir()
{
	SetPivot(&mCenter);
}

Ball::Ball(float direction)
	: Collidable(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, BALL_SPEED(20)
	, direction(direction)
	, mPos(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, mDir(-sinf(direction), cosf(direction), 0.f)
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
	mPos.y += BALL_SPEED * dt;
	this->SetPosition(mPos.x, mPos.y);

	std::cout << mDir.x << std::endl;
	std::cout << mDir.y << std::endl;
}