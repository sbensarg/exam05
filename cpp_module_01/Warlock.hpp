#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>
class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock(void); // canonical
	Warlock (Warlock const &rhs); // canonical
	Warlock &operator=(Warlock const &src); // canonical
	std::map<std::string ,ASpell *> stock;
public:
	Warlock(std::string n, std::string t);
	~Warlock(); // canonical

	const std::string & getName(void) const;
	const std::string & getTitle(void) const;

	void setName(std::string const & name);
	void setTitle(std::string const & tlt); 

	void introduce() const;

	void learnSpell(ASpell * as);
	void forgetSpell(std::string sp);
	void launchSpell(std::string sp_name, ATarget const & ref);

};