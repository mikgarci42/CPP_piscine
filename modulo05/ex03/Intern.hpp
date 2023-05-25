#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;
class ShrubberyCreationForm;

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		Intern & operator=(Intern const & src);
		virtual ~Intern(void);

		AForm*	makeForm(std::string form, std::string target);
};

#endif
