#include "AllBumpers.h"


AllBumpers::AllBumpers()
	: Sprite()
{
	collider = new CCircle(this, 0, 0, 6);
}

AllBumpers::AllBumpers(Texture::ID id)
	: Sprite(id)
{
	collider = new CCircle(this, 0, 0, 6);
}

AllBumpers::~AllBumpers()
{

}
