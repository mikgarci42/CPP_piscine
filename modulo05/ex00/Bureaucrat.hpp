#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;
		Bureaucrat(void);
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureucrat const &);
		Bureaucrat& opeartor=(Bureaucrat const &);
		~Bureaucrat(void);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("El grado es demasiado alto");
				}
		};
		class  GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("El grado es demasiado bajo");
				}
		};

		std::string	getName(void);
		int			getGrade(void);
};


#endif
