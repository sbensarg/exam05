#pragma once
#include <iostream>

#include "ATarget.hpp"

class BrickWall : public ATarget
{
private:

protected:

public:
	BrickWall(void); //canonical
	BrickWall(BrickWall const & src); //canonical
	BrickWall & operator=(BrickWall const & rhs); //canonical
	~BrickWall(); //canonical

	virtual ATarget *clone() const;

};