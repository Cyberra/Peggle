
#include "Peggle.h"

Peggle::Peggle()
	: screenWidth(gApp->GetParam().BackBufferWidth / 2)
	, bumperPos(0, 0, 0)
	, bumperDistance(60)
	, nbBumpers(20)
	, nbScoreBumpers(20)
{
	Textures->LoadTexture(Texture::ID::Background, "Images/Wallpaper3.jpg");
	Textures->LoadTexture(Texture::ID::Ball, "Images/MyBall.png");
	Textures->LoadTexture(Texture::ID::Bumper, "Images/BounceBall.png");
	Textures->LoadTexture(Texture::ID::Basket, "Images/Basket.png");
	Textures->LoadTexture(Texture::ID::Canon, "Images/Gun.png");
	Textures->LoadTexture(Texture::ID::ScoreBumper, "Images/ScoreBumper.png");
	
	Background* bkg =	new Background();
	Canon* canon =		new Canon();
	Basket* basket =	new Basket();

	InitBumpers(nbBumpers, nbScoreBumpers);
}

Peggle::~Peggle()
{

}

void Peggle::Update()
{
	
}

void Peggle::InitBumpers(int nbBumpers, int nbScoreBumpers)
{
	bumperPos.x -= screenWidth - bumperDistance;
	bumperPos.y += bumperDistance * 2;
	for (int i = 0; i < nbBumpers; ++i)
	{
		bumperPos.x += bumperDistance;

		if (bumperPos.x >= screenWidth)
		{
			bumperPos.x -= screenWidth * 2;
			bumperPos.y += bumperDistance;
		}

		if (i == 10)
		{
			bumperPos.x = -screenWidth + bumperDistance * 2;
			bumperPos.y -= bumperDistance;
		}

		Bumper* bumper = new Bumper();
		bumper->SetPosition(bumperPos.x, bumperPos.y);
		myBumpers.push_back(bumper);
	}

	bumperPos.x = -screenWidth + bumperDistance;
	bumperPos.y -= bumperDistance;
	for (int i = 0; i < nbScoreBumpers; ++i)
	{
		bumperPos.x += bumperDistance;

		if (bumperPos.x >= screenWidth)
		{
			bumperPos.x -= screenWidth * 2;
			bumperPos.y += bumperDistance;
		}

		if (i == 10)
		{
			bumperPos.x = -screenWidth + bumperDistance * 2;
			bumperPos.y -= bumperDistance;
		}

		ScoreBumpers* scoreBumper = new ScoreBumpers();
		scoreBumper->SetPosition(bumperPos.x, bumperPos.y);
		myBumpers.push_back(scoreBumper);
	}

	std::random_shuffle(myBumpers.begin(), myBumpers.end());
}