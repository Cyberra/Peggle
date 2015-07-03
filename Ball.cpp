
#include "Ball.h"

Ball::Ball()
	: Sprite(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, BALL_SPEED(500)
	, mPos()
	, mDir()
	, screenWidth(gApp->GetParam().BackBufferWidth / 2)
	, screenHeigth(gApp->GetParam().BackBufferHeight / 2)
{
	SetPivot(mCenter);
	SetRotationRad(0, 0, 0);
	SetID(Components::Ball);
	collider = new CCircle(this, 0, 0, mCenter.x);
}

Ball::Ball(D3DXVECTOR3 direction)
	: Sprite(Texture::ID::Ball)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, BALL_SPEED(250)
	, mPos(0, gApp->GetParam().BackBufferHeight / 2)
	, mDir(direction.x, direction.y)
	, screenWidth(gApp->GetParam().BackBufferWidth / 2)
	, screenHeigth(gApp->GetParam().BackBufferHeight / 2)
{
	SetPivot(mCenter);
	SetRotationRad(0, 0, 0);
	this->SetID(Components::Ball);
	collider = new CCircle(this, mPos.x, mPos.y, mCenter.x);
}

Ball::~Ball()
{
	delete collider;
	collider = nullptr;
}

void Ball::Update()
{
	float dt = gTimer->GetDeltaTime();

	Move(dt);
	Collision(dt);
}

void Ball::Collision(float dt)
{
	// Bounce on walls.
	if (mPos.x >= screenWidth)
	{
		mDir.x *= -1;
	}
	if (mPos.x <= -(screenWidth))
	{
		mDir.x *= -1;
	}
	
	// Not in the basket.
	if (mPos.y <= -(screenHeigth))
	{
		isVisible = false;
		SetPosition(0, -1000);
		SetRotationRad(0, 0, 0);
	}

	//Go through each collider collided with though the LookForCollision Function
	for each (Collider* col in collider->LookForCollisions())
	{

		mDir = D3DXVECTOR2(this->GetPosition().x, this->GetPosition().y) - col->GetPosition();
		D3DXVec2Normalize(&mDir, &mDir);

		// Bumper
		if (col->GetGameObject()->GetID() == Components::Bumper)
		{
			// Consider that collider's component a block and make him shout
			static_cast<Bumper*>(col->GetGameObject())->Shout();
		}

		// Basket
		if (col->GetGameObject()->GetID() == Components::Basket)
		{
			
			isVisible = false;
			SetPosition(0, -1000);
			SetRotationRad(0, 0, 0);
		}

		if (col->GetGameObject()->GetID() == Components::ScoreBumper)
		{
			static_cast<ScoreBumpers*>(col->GetGameObject())->Hit();
		}
	}
}

void Ball::Move(float dt)
{
	mPos += mDir * BALL_SPEED * dt;
	collider->SetPosition(mPos.x, mPos.y);
	SetPosition(mPos.x, mPos.y);

	// Gravité
	mDir.y -= 0.981f * 2 * dt;
}