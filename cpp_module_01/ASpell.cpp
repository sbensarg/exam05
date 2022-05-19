#include "ASpell.hpp"

ASpell::ASpell(void)
{

}

ASpell::ASpell(std::string n, std::string e): name(n), effects(e)
{

}

ASpell::ASpell(ASpell const & src)
{
	*this = src;
}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return (*this);
}

ASpell::~ASpell()
{

}

std::string ASpell::getName(void) const
{
	return (this->name);
}

std::string ASpell::getEffects(void) const
{
	return (this->effects);
}

void ASpell::lunch(ATarget const & at) const
{
	at.getHitBySpell(*this);
}
