#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{

}

SpellBook::SpellBook (SpellBook const &rhs)
{
	*this = rhs;
}

SpellBook &SpellBook::operator=(SpellBook const &src) 
{
	return (*this);
}


SpellBook::~SpellBook()
{
	for (std::map<std::string ,ASpell *>::iterator it = book.begin(); it != book.end(); it++)
	{
		delete it->second;
	}
	book.clear();
}

void SpellBook::learnSpell(ASpell * as)
{
		if (as)
		book.insert(std::pair<std::string, ASpell*>(as->getName(), as->clone()));
}

void SpellBook::forgetSpell(std::string const & sp)
{
	std::map<std::string ,ASpell *>::iterator it;
	it = book.find(sp);
	if (it != book.end())
	{
		delete it->second;
		book.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const & sp_name)
{	
	std::map<std::string ,ASpell *>::iterator it;
	it = book.find(sp_name);
	if (it != book.end())
		return book[sp_name];
	return (NULL);
}
