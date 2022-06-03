#include "Warlock.hpp"

Warlock::Warlock(void)
{

}

Warlock::Warlock(std::string n, std::string t) : name(n), title(t)
{
	std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
	for (std::map<std::string ,ASpell *>::iterator it = stock.begin(); it != stock.end(); it++)
	{
		delete it->second;
	}
	stock.clear();
}

Warlock::Warlock (Warlock const &rhs) : name(rhs.name), title(rhs.title)
{

}

Warlock &Warlock::operator=(Warlock const &src) 
{
	this->name = src.name;
	this->title = src.title;
	return (*this);
}

const std::string & Warlock::getName(void) const
{
	return (this->name);
}

const std::string & Warlock::getTitle(void) const
{
	return (this->title);
};

void Warlock::setName(std::string const & name)
{
	this->name = name;
}

void Warlock::setTitle(std::string const & tlt)
{
	this->title = tlt;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title<<"!\n";
}

void Warlock::learnSpell(ASpell * as)
{
	if (as)
		stock.insert(std::pair<std::string, ASpell*>(as->getName(), as->clone()));
}

void Warlock::forgetSpell(std::string sp)
{
	std::map<std::string ,ASpell *>::iterator it;
	it = stock.find(sp);
	if (it != stock.end())
	{
		delete it->second;
		stock.erase(it);
	}
}

void Warlock::launchSpell(std::string sp_name, ATarget const & ref)
{
	ASpell *aspell = stock[sp_name];
	if (aspell)
		aspell->lunch(ref);
}
