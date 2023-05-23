#ifndef AFORM_H
#define AFORM_H
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const		_name;
		bool				_signed;
		int	const			_gradeSign;
		int	const			_gradeExecute;
		AForm(void);

	public:
		AForm(std::string name, int gradeSign, int gradeExecute, bool _signed = false);
		AForm(AForm const & src);
		AForm & operator=(AForm const & src);
		virtual ~AForm(void);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("El grado para firmar o ejecutar es demasiado alto");
				}
		};
		class  GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("El grado para firmar o ejecutar es demasiado bajo");
				}
		};

		bool		beSigned(Bureaucrat & src);
		virtual bool	execute(Bureaucrat const & executor) const = 0;
		std::string 	getName(void) const;
		bool		getSigned(void) const;
		void		setValue(int	val);
		int		getGradeSign(void) const;
		int 		getGradeExecute(void) const;
		bool		checkExecute(Bureaucrat const & executor) const;
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif
