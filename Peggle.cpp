
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
	PlaceBumpers();
}

Peggle::~Peggle()
{

}

void Peggle::Update()
{
	
}

void Peggle::InitBumpers(int nbBumpers, int nbScoreBumpers)
{
	for (int i = 0; i < nbBumpers; ++i)
	{
		Bumper* bumper = new Bumper();
		myBumpers.push_back(bumper);
	}

	for (int i = 0; i < nbScoreBumpers; ++i)
	{
		ScoreBumpers* scoreBumper = new ScoreBumpers();
		myBumpers.push_back(scoreBumper);
	}


	std::random_shuffle(myBumpers.begin(), myBumpers.end());
}

void Peggle::PlaceBumpers()
{
	bumperPos.y += bumperDistance * 2;

	for (int i = 0; i < myBumpers.size(); ++i)
	{
		bumperPos.x += bumperDistance;

		// x %  y /
		if (i % 9 == i / 9)
		{
			bumperPos.x = -screenWidth + bumperDistance * 2;
			bumperPos.y -= bumperDistance;
		}

		myBumpers[i]->SetPosition(bumperPos.x, bumperPos.y);
	}
}