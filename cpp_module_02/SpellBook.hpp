#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "vector"
class SpellBook
{
private:
	SpellBook (SpellBook const &rhs); // canonical
	SpellBook &operator=(SpellBook const &src); // canonical
public:
	SpellBook(void); // canonical
	~SpellBook(); // canonical
	std::vector<ASpell *> book;

	void learnSpell(ASpell * as);
	void forgetSpell(std::string const & sp);
	ASpell* createSpell(std::string const & sp_name);

};