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
}

Warlock::Warlock (Warlock const &rhs)
{
	*this = rhs;
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
	spbook.learnSpell(as);
}

void Warlock::forgetSpell(std::string sp)
{
	spbook.forgetSpell(sp);
}

void Warlock::launchSpell(std::string sp_name, ATarget const & ref)
{
	ASpell *spel = spbook.createSpell(sp_name);
	if (spel)
		spel->lunch(ref);
}
