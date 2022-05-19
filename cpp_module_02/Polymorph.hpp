#pragma once
#include <iostream>

#include "ASpell.hpp"

class Polymorph : public ASpell
{
private:

protected:

public:
	Polymorph(void); //canonical
	Polymorph(Polymorph const & src); //canonical
	Polymorph & operator=(Polymorph const & rhs); //canonical
	~Polymorph(); //canonical

	virtual ASpell *clone() const;

};