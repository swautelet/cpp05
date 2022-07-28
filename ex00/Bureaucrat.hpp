#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copi);
		~Bureaucrat();
		Bureaucrat& operator =(const Bureaucrat&);
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

	private:
		std::string const _name;
		int	_grade;

	protected:

};

std::ostream& operator <<(std::ostream& out, const Bureaucrat& nb);

#endif