#include "Fireball.hpp"

Fireball::Fireball(void)
{
	this->name = "Fireball";
	this->effects = "burnt to a crisp";
}


Fireball::Fireball(Fireball const & src)
{
	*this = src;
}

Fireball & Fireball::operator=(Fireball const & rhs)
{
	return (*this);
}

Fireball::~Fireball()
{

}

ASpell *Fireball::clone() const
{
	return new Fireball();
}