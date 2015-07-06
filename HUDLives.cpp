
#include "HUDLives.h"

HUDLives::HUDLives()
	: Sprite(Texture::ID::number3)
	, mCenter(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0)
	, livesLeft()
{
	SetPivot(mCenter);
	SetRotationDeg(180, 0, 180);

	// Set my false number out of the screen.
	SetPosition(1000, 250);
}

HUDLives::~HUDLives()
{

}

void HUDLives::UpdateLives(int nbLives)
{
	livesLeft = nbLives;

	// Clear my actives number.
	for (int i = 0; i < myNumbers.size(); ++i)
	{
		myNumbers[i]->SetActive(false);
	}
	myNumbers.clear();

	// Write the correct score on the screen.
	if (livesLeft == 3)
	{
		Sprite* three = new Sprite(Texture::ID::number3);
		three->SetPosition(250, 250);
		three->SetRotationDeg(180, 0, 180);
		myNumbers.push_back(three);
	}
	
	if (livesLeft == 2)
	{
		Sprite* two = new Sprite(Texture::ID::number2);
		two->SetPosition(250, 250);
		two->SetRotationDeg(180, 0, 180);
		myNumbers.push_back(two);
	}
	
	if (livesLeft == 1)
	{
		Sprite* one = new Sprite(Texture::ID::number1);
		one->SetPosition(250, 250);
		one->SetRotationDeg(180, 0, 180);
		myNumbers.push_back(one);
	}
	
	if (livesLeft == 0)
	{
		Sprite* zero = new Sprite(Texture::ID::number0);
		zero->SetPosition(250, 250);
		zero->SetRotationDeg(180, 0, 180);
		myNumbers.push_back(zero);
	}
}