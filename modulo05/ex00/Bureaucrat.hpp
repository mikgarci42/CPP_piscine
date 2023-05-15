#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

class Bureaucrat
{
	private:
		std::string	const _name;
		int			_grade;
		Bureaucrat(void);
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		Bureaucrat & operator=(Bureaucrat const & src);
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

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		setName(std::string const & name);
		void		setGrade(int const & grade);
		void		setGradeUp(void);
		void		setGradeDown(void);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
