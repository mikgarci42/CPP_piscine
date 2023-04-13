#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *id[4];

	public:
		
		MateriaSource(void);
    	MateriaSource(MateriaSource const &obj);

  		~MateriaSource(void);

  		 MateriaSource &operator=(MateriaSource const &obj);

		virtual void learnMateria(AMateria *m);
		virtual AMateria* createMateria(std::string const &type);
};

#endif
