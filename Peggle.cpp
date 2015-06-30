
#include "Peggle.h"
#include "Sprite.h"
#include "RessourceIDs.h"

#include "Background.h"
#include "Ball.h"
#include "Bumper.h"
#include "Canon.h"
#include "Wall.h"
#include "Basket.h"

Peggle::Peggle()
{
	Textures->LoadTexture(Texture::ID::Background, "Images/Background.png");
	Textures->LoadTexture(Texture::ID::Ball, "Images/MyBall.png");
	Textures->LoadTexture(Texture::ID::Bumper, "Images/BounceBall.png");
	Textures->LoadTexture(Texture::ID::Basket, "Images/Basket.png");
	Textures->LoadTexture(Texture::ID::Canon, "Images/Gun.png");
	
	Background* bkg =	new Background();
	//Ball* myBall =		new Ball();
	//Bumper* bumper =	new Bumper();
	//Basket* basket =	new Basket();
	Canon* canon =		new Canon();
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
