#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default Bureaucrat"), _grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	if (grade > 150)
	{
		throw(GradeTooLowException("Grade too low to be created!"));
	}
	if (grade < 1)
	{
		throw(GradeTooHighException("Grade too high to be created!"));
	}
}

Bureaucrat::~Bureaucrat()
{

}

int	const& Bureaucrat::getGrade() const
{
	return(this->_grade);
}

std::string const&	Bureaucrat::getName() const
{
	return(this->_name);
}

std::ostream& operator <<(std::ostream& out, const Bureaucrat& bur)
{
	std::cout << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string err_msg):_err_msg(err_msg)
{

}

Bureaucrat::GradeTooHighException::~GradeTooHighException()
{

}

std::string const& Bureaucrat::GradeTooHighException::print_message()
{
	std::cout << _err_msg << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string err_msg):_err_msg(err_msg)
{

}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{

}

std::string const& Bureaucrat::GradeTooLowException::print_message()
{
	std::cout << _err_msg << std::endl;
}