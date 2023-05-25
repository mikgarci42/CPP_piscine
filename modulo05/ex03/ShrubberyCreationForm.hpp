#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm (const ShrubberyCreationForm & src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);

		bool	execute(Bureaucrat const & executor) const;
		static AForm*	copy(std::string target);	
};

#endif
