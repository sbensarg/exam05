#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{

}


TargetGenerator::~TargetGenerator()
{
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
	if (t != NULL)
	{
		generator.push_back(t->clone());
	}
}

void TargetGenerator::forgetTargetType(std::string const &tp)
{
	for (int i = 0; i < generator.size(); i++)
	{
		if (generator[i]->getType() == tp)
			generator.erase(generator.begin() + i);
	}
}

ATarget* TargetGenerator::createTarget(std::string const & ct)
{
	
	for (int i = 0; i < generator.size(); i++)
	{
		if (generator[i]->getType() == ct)
		{
			//generator.push_back(generator[i]->clone());
			return (generator[i]);
		}
	}
	return (NULL);
}
