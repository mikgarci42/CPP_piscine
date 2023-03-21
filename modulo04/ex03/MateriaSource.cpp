#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) 
{
	std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
		this->id[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &obj) 
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = obj;
	for (int i = 0; i < 4; i++)
		this->id[i] = NULL;
}

MateriaSource::~MateriaSource(void) 
{
	std::cout << "MateriaSource default destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj) 
{
	std::cout << "MateriaSource asignment operator overload called" << std::endl;
	*(this->id) = *(obj.id);
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		if (!this->id[idx])
		{
			this->id[idx] = m;
			return;	
		}
		idx++;
	}
}

AMateria*    MateriaSource::createMateria(std::string const &type) 
{
	int idx = 0;
	while (idx < 4)
	{
        	if (this->id[idx] && this->id[idx]->getType() == type)
	       	{
			std::cout << *(this->id[idx]) << " materia has been CREATED" << std::endl;
			return(this->id[idx]->clone());
		}
		idx++;
	}
	std::cout << std::endl << "Materia can't be CREATED because it hasn't being learnt" << std::endl << std::endl;
	return NULL;
}
