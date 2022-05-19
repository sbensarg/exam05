#include "Fwoosh.hpp"


Fwoosh::Fwoosh(void)
{
	this->name = "Fwoosh";
	this->effects = "fwooshed";
}


Fwoosh::Fwoosh(Fwoosh const & src)
{
	*this = src;
}

Fwoosh & Fwoosh::operator=(Fwoosh const & rhs)
{
	return (*this);
}

Fwoosh::~Fwoosh()
{

}

ASpell *Fwoosh::clone() const
{
	return new Fwoosh();
}