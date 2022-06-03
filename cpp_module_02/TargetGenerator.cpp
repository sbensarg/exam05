#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{

}


TargetGenerator::~TargetGenerator()
{
	for (std::map<std::string ,ATarget *>::iterator it = generator.begin(); it != generator.end(); it++)
	{
		delete it->second;
	}
	generator.clear();
}

TargetGenerator::TargetGenerator (TargetGenerator const &rhs)
{
	*this = rhs;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &src) 
{
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget* t)
{
	if (t)
		generator.insert(std::pair<std::string, ATarget*>(t->getType(), t->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &tp)
{
	std::map<std::string ,ATarget *>::iterator it;
	it = generator.find(tp);
	if (it != generator.end())
	{
		delete it->second;
		generator.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(std::string const & ct)
{
	std::map<std::string ,ATarget *>::iterator it;
	it = generator.find(ct);
	if (it != generator.end())
		return generator[ct];
	return (NULL);
}
