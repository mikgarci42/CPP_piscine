#ifndef SHRUBBERYCRREATIONFORM_H
#define SHRUBBERYCRREATIONFORM_H

#include "AForm.hpp"

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
};

#endif
