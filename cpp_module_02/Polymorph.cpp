#include "Polymorph.hpp"


Polymorph::Polymorph(void)
{
	this->name = "Polymorph";
	this->effects = "turned into a critter";
}


Polymorph::Polymorph(Polymorph const & src)
{
	*this = src;
}

Polymorph & Polymorph::operator=(Polymorph const & rhs)
{
	return (*this);
}

Polymorph::~Polymorph()
{

}

ASpell *Polymorph::clone() const
{
	return new Polymorph();
}