#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm (const PresidentialPardonForm & src);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		bool	execute(Bureaucrat const & executor) const;
};

#endif
