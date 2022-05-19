#pragma once
#include <iostream>

#include "ATarget.hpp"

class Dummy : public ATarget
{
private:

protected:

public:
	Dummy(void); //canonical
	Dummy(Dummy const & src); //canonical
	Dummy & operator=(Dummy const & rhs); //canonical
	~Dummy(); //canonical

	virtual ATarget *clone() const;

};