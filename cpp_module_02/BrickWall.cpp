#include "BrickWall.hpp"


BrickWall::BrickWall(void)
{
	this->type = "Inconspicuous Red-brick Wall";
}


BrickWall::BrickWall(BrickWall const & src)
{
	*this = src;
}

BrickWall & BrickWall::operator=(BrickWall const & rhs)
{
	return (*this);
}

BrickWall::~BrickWall()
{

}

ATarget *BrickWall::clone() const
{
	return new BrickWall();
}