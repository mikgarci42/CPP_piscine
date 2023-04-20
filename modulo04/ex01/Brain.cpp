#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain has been created\n";
	for (int i = 0; i < 100; i++)
        	this->ideas[i] = "IDEA";
}

Brain::~Brain(void)
{
	std::cout << "Brain has been deleted\n";
}

Brain & Brain::operator=(const Brain &rhs) 
{
	for (int i = 0; i < 100; i++)
        	this->ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::Brain(const Brain &src) {
	*this = src;
}

void Brain::setIdea(std::string idea, int num)
{
	if (num < 100 && num >= 0)
		this->ideas[num] = idea;
	return ;
}

std::string Brain::getIdea(int num) const
{
	return (this->ideas[num]);
}
