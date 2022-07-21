#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		class GradeTooHighException: public std::exception{
			public:
				GradeTooHighException(std::string err_msg);
				~GradeTooHighException();
				std::string const& print_message();
			private:
				std::string _err_msg;
		};
		class GradeTooLowException: public std::exception{
			public:
				GradeTooLowException(std::string err_msg);
				~GradeTooLowException();
				std::string const& print_message();
			private:
				std::string _err_msg;
		};
		int const&	getGrade() const;
		std::string	const& getName() const;

	private:
		std::string const _name;
		int	_grade;

	protected:

};

std::ostream& operator <<(std::ostream& out, const Bureaucrat& nb);

#endif