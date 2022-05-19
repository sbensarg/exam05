#include "Dummy.hpp"


Dummy::Dummy(void)
{
	this->type = "Target Practice Dummy";
}


Dummy::Dummy(Dummy const & src)
{
	*this = src;
}

Dummy & Dummy::operator=(Dummy const & rhs)
{
	return (*this);
}

Dummy::~Dummy()
{

}

ATarget *Dummy::clone() const
{
	return new Dummy();
}