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
	for (int i = 0; i < book.size(); i++)
	{
		delete book[i];
	}
}
void SpellBook::learnSpell(ASpell * as)
{
	if (as != NULL)
	{
		book.push_back(as->clone());
	}
		
}

void SpellBook::forgetSpell(std::string const & sp)
{
	for (int i = 0; i < book.size(); i++)
	{
		if (book[i]->getName() == sp)
			book.erase(book.begin() + i);
	}
}

ASpell* SpellBook::createSpell(std::string const & sp_name)
{	
	for (int i = 0; i < book.size(); i++)
	{
		if (book[i]->getName() == sp_name)
		{
			return (book[i]);
		}
	}
	return (NULL);
}
