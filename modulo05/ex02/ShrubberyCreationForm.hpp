#ifndef SHRUBBERYCRREATIONFORM_H
#define SHRUBBERYCRREATIONFORM_H

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string name);
		~ShrubberyCreationForm(void);

		void	execute(Bureaucrat const & executor) const;
};

#endif
