
#include "Peggle.h"

Peggle::Peggle()
	: distanceBetweenBumpers(gApp->GetParam().BackBufferWidth / 10)
{
	Textures->LoadTexture(Texture::ID::Background, "Images/Wallpaper3.jpg");
	Textures->LoadTexture(Texture::ID::Ball, "Images/MyBall.png");
	Textures->LoadTexture(Texture::ID::Bumper, "Images/BounceBall.png");
	Textures->LoadTexture(Texture::ID::Basket, "Images/Basket.png");
	Textures->LoadTexture(Texture::ID::Canon, "Images/Gun.png");
	
	Background* bkg =	new Background();
	//Ball* myBall =	new Ball();
	//Bumper* bumper1 = new Bumper();
	//bumper1->SetPosition(distanceBetweenBumpers, distanceBetweenBumpers * 2);
	//Bumper* bumper2 = new Bumper();
	//bumper2->SetPosition(distanceBetweenBumpers * 2, distanceBetweenBumpers * 2);
	//Bumper* bumper3 = new Bumper();
	//bumper3->SetPosition(distanceBetweenBumpers * 3, distanceBetweenBumpers * 2);
	//Bumper* bumper4 = new Bumper();
	//bumper4->SetPosition(distanceBetweenBumpers * 4, distanceBetweenBumpers * 2);
	//Bumper* bumper5 = new Bumper();
	//bumper5->SetPosition(0, distanceBetweenBumpers * 2);
	//Bumper* bumper6 = new Bumper();
	//bumper6->SetPosition(-distanceBetweenBumpers, distanceBetweenBumpers * 2);
	//Bumper* bumper7 = new Bumper();
	//bumper7->SetPosition(-distanceBetweenBumpers * 2, distanceBetweenBumpers * 2);
	//Bumper* bumper8 = new Bumper();
	//bumper8->SetPosition(-distanceBetweenBumpers * 3, distanceBetweenBumpers * 2);
	//Bumper* bumper9 = new Bumper();
	//bumper9->SetPosition(-distanceBetweenBumpers * 4, distanceBetweenBumpers * 2);
	
	//Bumper* bumper10 = new Bumper();
	//bumper10->SetPosition(distanceBetweenBumpers / 2, distanceBetweenBumpers);
	//Bumper* bumper11 = new Bumper();
	//bumper11->SetPosition(distanceBetweenBumpers / 2 + distanceBetweenBumpers, distanceBetweenBumpers);
	//Bumper* bumper12 = new Bumper();
	//bumper12->SetPosition(distanceBetweenBumpers / 2 + distanceBetweenBumpers * 2, distanceBetweenBumpers);
	//Bumper* bumper13 = new Bumper();
	//bumper13->SetPosition(distanceBetweenBumpers / 2 + distanceBetweenBumpers * 3, distanceBetweenBumpers);
	//Bumper* bumper14 = new Bumper();
	//bumper14->SetPosition(-distanceBetweenBumpers / 2, distanceBetweenBumpers);
	//Bumper* bumper15 = new Bumper();
	//bumper15->SetPosition(-distanceBetweenBumpers / 2 - distanceBetweenBumpers, distanceBetweenBumpers);
	//Bumper* bumper16 = new Bumper();
	//bumper16->SetPosition(-distanceBetweenBumpers / 2 - distanceBetweenBumpers * 2, distanceBetweenBumpers);
	//Bumper* bumper17 = new Bumper();
	//bumper17->SetPosition(-distanceBetweenBumpers / 2 - distanceBetweenBumpers * 3, distanceBetweenBumpers);

	Canon* canon =		new Canon();
	//Basket* basket =	new Basket();
}

Peggle::~Peggle()
{

}

void Peggle::Start()
{

}

void Peggle::Update()
{
	
}

void Peggle::Draw()
{

}

void Peggle::Stop()
{

}
