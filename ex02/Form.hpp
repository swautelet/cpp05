#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:
		Form(std::string name, int gradesign, int gradexec);
		Form(const Form& copi);
		Form& operator =(const Form& copi);
		~Form();
		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};
		const std::string getName() const;
		bool	getsigned() const;
		int	get_to_sign() const;
		int	get_to_exec() const;
		void	beSigned(const Bureaucrat& signat);
		virtual void	execute(const Bureaucrat& signat) = 0;

	private:
		Form();
		const std::string _name;
		const int	_to_exec;
		const int	_to_sign;
		bool _signed;

	protected:

};

std::ostream& operator <<(std::ostream& out, const Form& nb);

#endif