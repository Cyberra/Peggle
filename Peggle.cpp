
#include "Peggle.h"
#include "Sprite.h"
#include "RessourceIDs.h"

#include "Background.h"
#include "Ball.h"
#include "Bumper.h"
#include "Canon.h"
#include "Wall.h"

Peggle::Peggle()
{
	Textures->LoadTexture(Texture::ID::Background, "Images/Background.png");
	Textures->LoadTexture(Texture::ID::MyBall, "Images/MyBall.png");
	Textures->LoadTexture(Texture::ID::Bumper, "Images/BounceBall.png");
	Textures->LoadTexture(Texture::ID::Basket, "Images/Basket.png");
	Textures->LoadTexture(Texture::ID::Gun, "Images/Gun.png");
	
	Background* bkg =	new Background();
	Sprite* myBall =	new Sprite(Texture::ID::MyBall);
	//Bumper* bumper =	new Bumper();
	Sprite* basket =	new Sprite(Texture::ID::Basket);
	Sprite* canon =		new Sprite(Texture::ID::Gun);
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
