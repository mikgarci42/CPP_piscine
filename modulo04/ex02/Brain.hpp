#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(Brain const &);
		Brain& operator=(Brain const &);
		virtual ~Brain(void);

		void		setIdea(std::string idea, int num);
		std::string	getIdea(int num) const;
};

#endif

