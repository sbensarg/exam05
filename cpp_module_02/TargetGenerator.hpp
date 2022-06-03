#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
	std::map<std::string, ATarget *> generator;
	TargetGenerator (TargetGenerator const &rhs); // canonical
	TargetGenerator &operator=(TargetGenerator const &src); // canonical;
public:
	TargetGenerator(void); // canonical
	
	~TargetGenerator(); // canonical

	void learnTargetType(ATarget* t);
	void forgetTargetType(std::string const &tp);
	ATarget* createTarget(std::string const & ct);

};