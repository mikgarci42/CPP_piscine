#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm (const RobotomyRequestForm & src);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		bool	execute(Bureaucrat const & executor) const;
};

#endif
