#pragma once
#include <iostream>

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
private:

protected:

public:
	Fwoosh(void); //canonical
	virtual ~Fwoosh(); //canonical
	virtual ASpell *clone() const;

};