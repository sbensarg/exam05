#pragma once
#include <iostream>

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
private:

protected:

public:
	Fwoosh(void); //canonical
	Fwoosh(Fwoosh const & src); //canonical
	Fwoosh & operator=(Fwoosh const & rhs); //canonical
	~Fwoosh(); //canonical

	virtual ASpell *clone() const;

};