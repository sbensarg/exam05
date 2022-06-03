#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
	SpellBook (SpellBook const &rhs); // canonical
	SpellBook &operator=(SpellBook const &src); // canonical
	std::map<std::string, ASpell *> book;
public:
	SpellBook(void); // canonical
	~SpellBook(); // canonical
	
	void learnSpell(ASpell * as);
	void forgetSpell(std::string const & sp);
	ASpell* createSpell(std::string const & sp_name);

};