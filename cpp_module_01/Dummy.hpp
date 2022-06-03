#pragma once
#include <iostream>

#include "ATarget.hpp"

class Dummy : public ATarget
{
private:

protected:

public:
	Dummy(void); //canonical
	virtual ~Dummy(); //canonical

	virtual ATarget *clone() const;

};