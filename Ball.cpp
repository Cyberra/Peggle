
#include "Ball.h"


Ball::Ball()
	: Sprite(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, BALL_SPEED(250)
	, mPos()
	, mDir()
{
	SetPivot(mCenter);
	SetRotationRad(0, 0, 0);
	SetID(Components::Ball);
	collider = new CCircle(this, 0, 0, mCenter.x * 2);
}

Ball::Ball(D3DXVECTOR3 direction)
	: Sprite(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, BALL_SPEED(250)
	, mPos(0, gApp->GetParam().BackBufferHeight / 2, 0)
	, mDir(direction.x, direction.y, 0)
{
	SetPivot(mCenter);
	SetRotationRad(0, 0, 0);
	this->SetID(Components::Ball);
	collider = new CCircle(this, mPos.x, mPos.y, mCenter.x * 2);
}

Ball::~Ball()
{

}

void Ball::Update()
{
	float dt = gTimer->GetDeltaTime();

	Move(dt);

	//Go through each collider collided with though the LookForCollision Function
	for each (Collider* col in collider->LookForCollisions())
	{
		//If one of the collider is a bumper
		if (col->GetGameObject()->GetID() == Components::Bumper)
		{
			//Consider that collider's component a block and make him shout
			static_cast<Bumper*>(col->GetGameObject())->Shout();
		}
	}
}

void Ball::Move(float dt)
{
	mPos += mDir * BALL_SPEED * dt;
	//collider->SetPosition(mPos.x, mPos.y);
	SetPosition(mPos.x, mPos.y);
}