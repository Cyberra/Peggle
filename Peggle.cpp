
#include "Peggle.h"
#include "Sprite.h"
#include "RessourceIDs.h"

Peggle::Peggle()
{
	Textures->LoadTexture(Texture::ID::Background, "Images/Background.png");
	Textures->LoadTexture(Texture::ID::MyBall, "Images/MyBall.png");
	Textures->LoadTexture(Texture::ID::BounceBall, "Images/BounceBall.png");
	Textures->LoadTexture(Texture::ID::Basket, "Images/Basket.png");
	Textures->LoadTexture(Texture::ID::Gun, "Images/Gun.png");
	
	Sprite* background =	new Sprite(Texture::ID::Background);
	Sprite* myBall =		new Sprite(Texture::ID::MyBall);
	Sprite* inGameBall =	new Sprite(Texture::ID::BounceBall);
	Sprite* basket =		new Sprite(Texture::ID::Basket);
	Sprite* gun =			new Sprite(Texture::ID::Gun);
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
