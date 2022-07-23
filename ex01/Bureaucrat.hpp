#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};
		int const&	getGrade() const;
		std::string	const& getName() const;
		void	promote();
		void	demote();
		void	signForm(Form& tosign) const;

	private:
		std::string const _name;
		int	_grade;

	protected:

};

std::ostream& operator <<(std::ostream& out, const Bureaucrat& nb);

#endif