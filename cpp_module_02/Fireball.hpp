#pragma once
#include <iostream>

#include "ASpell.hpp"

class Fireball : public ASpell
{
private:

protected:

public:
	Fireball(void); //canonical
	Fireball(Fireball const & src); //canonical
	Fireball & operator=(Fireball const & rhs); //canonical
	~Fireball(); //canonical

	virtual ASpell *clone() const;

};