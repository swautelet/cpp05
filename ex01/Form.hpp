#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

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
		const int	get_to_sign() const;
		const int	get_to_exec() const;
		void	beSigned(const Bureaucrat& signat);

	private:
		Form();
		const std::string _name;
		bool _signed;
		const int	_to_sign;
		const int	_to_exec;

	protected:

};

std::ostream& operator <<(std::ostream& out, const Form& nb);

#endif