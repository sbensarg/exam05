#pragma once
#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget
{
private:

protected:
	std::string type;
public:
	ATarget(void); //canonical
	ATarget(std::string t);
	ATarget(ATarget const & src); //canonical
	ATarget & operator=(ATarget const & rhs); //canonical
	virtual ~ATarget(); //canonical

	std::string const &getType(void) const;
	void setType(std::string const & tp);

	virtual ATarget *clone() const = 0;

/* ASpell const &  as   const ASpell  &  as*/
	void getHitBySpell(ASpell const &  as) const;



};