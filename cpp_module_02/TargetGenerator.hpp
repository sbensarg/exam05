#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "vector"
#include "SpellBook.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
private:
	
public:
	TargetGenerator(void); // canonical
	TargetGenerator (TargetGenerator const &rhs); // canonical
	TargetGenerator &operator=(TargetGenerator const &src); // canonical;
	~TargetGenerator(); // canonical
	std::vector<ATarget *> generator;

	void learnTargetType(ATarget* t);
	void forgetTargetType(std::string const &tp);
	ATarget* createTarget(std::string const & ct);

};