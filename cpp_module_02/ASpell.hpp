#pragma once
#include <iostream>

#include "ATarget.hpp"
class ATarget;
class ASpell
{
private:

protected:
	std::string name;
	std::string effects;
public:
	ASpell(void); //canonical
	ASpell(std::string n, std::string e);
	ASpell(ASpell const & src); //canonical
	ASpell & operator=(ASpell const & rhs); //canonical
	virtual ~ASpell(); //canonical

	std::string getName(void) const;
	std::string getEffects(void) const;
	virtual ASpell *clone() const = 0;

	void lunch(ATarget const & at) const;


};