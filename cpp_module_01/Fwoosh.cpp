#include "Fwoosh.hpp"


Fwoosh::Fwoosh(void)
{
	this->name = "Fwoosh";
	this->effects = "fwooshed";
}

Fwoosh::~Fwoosh()
{

}

ASpell *Fwoosh::clone() const
{
	return new Fwoosh();
}