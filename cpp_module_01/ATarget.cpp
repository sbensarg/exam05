#include "ATarget.hpp"

ATarget::ATarget(void)
{

}

ATarget::ATarget(std::string t): type(t)
{

}

ATarget::ATarget(ATarget const & src) : type(src.type)
{

}

ATarget & ATarget::operator=(ATarget const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

ATarget::~ATarget()
{

}

std::string const &ATarget::getType(void) const
{
	return (this->type);
}

void ATarget::setType(std::string const & tp)
{
	this->type = tp;
}

void ATarget::getHitBySpell(ASpell const & as) const
{
	std::cout << this->type << " has been "<< as.getEffects() <<"!\n";
}