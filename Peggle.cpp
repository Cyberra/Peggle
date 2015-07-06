
#include "Peggle.h"

Peggle::Peggle()
	: screenWidth(gApp->GetParam().BackBufferWidth / 2)
	, screenHeight(gApp->GetParam().BackBufferHeight / 2)
	, bumperPos(0, 0, 0)
	, bumperDistance(60)
	, nbBumpers(20)
	, nbScoreBumpers(20)
	, gameLaunched(false)
	, checkBalls(false)
	, deadBalls(0)
{
	Textures->LoadTexture(Texture::ID::Background, "Images/Wallpaper3.jpg");
	Textures->LoadTexture(Texture::ID::Ball, "Images/MyBall.png");
	Textures->LoadTexture(Texture::ID::Bumper, "Images/BounceBall.png");
	Textures->LoadTexture(Texture::ID::Basket, "Images/Basket.png");
	Textures->LoadTexture(Texture::ID::Canon, "Images/Gun.png");
	Textures->LoadTexture(Texture::ID::ScoreBumper, "Images/ScoreBumper.png");
	Textures->LoadTexture(Texture::ID::StartScreen, "Images/StartScreen.jpg");
	Textures->LoadTexture(Texture::ID::number0, "Images/0.png");
	Textures->LoadTexture(Texture::ID::number1, "Images/1.png");
	Textures->LoadTexture(Texture::ID::number2, "Images/2.png");
	Textures->LoadTexture(Texture::ID::number3, "Images/3.png");
	
	startScreen = new StartScreen();
}

Peggle::~Peggle()
{

}

void Peggle::Update()
{
	float dt = gTimer->GetDeltaTime();

	if (gDInput->keyDown(DIKEYBOARD_RETURN) && gameLaunched == false)
	{
		InitGame();
		gameLaunched = true;
		checkBalls = true;
	}

	if (checkBalls)
	{
		CheckGameOver();
	}
}

void Peggle::CheckGameOver()
{
	if (canon->nbBalls == 0)
	{
		for (int i = 0; i < canon->myBalls.size(); ++i)
		{
			if (canon->myBalls[i]->GetPosition().y <= -500.f)
			{
				deadBalls++;
				if (deadBalls == canon->myBalls.size())
				{
					RestartGame();
				}
				else
				{
					deadBalls = 0;
				}
			}
		}
	}
}

void Peggle::RestartGame()
{
	std::cout << "RESTART" << std::endl;
}

void Peggle::InitGame()
{
	delete startScreen;
	startScreen = nullptr;

	bkg = new Background();
	canon = new Canon();
	basket = new Basket();

	InitBumpers(nbBumpers, nbScoreBumpers);
	PlaceBumpers();
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
		myBumpers[i]->collider->SetPosition(bumperPos.x, bumperPos.y);
	}
}