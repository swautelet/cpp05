#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default Bureaucrat"), _grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	if (grade > 150)
	{
		throw(GradeTooLowException());
	}
	if (grade < 1)
	{
		throw(GradeTooHighException());
	}
	std::cout << *this;
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

void	Bureaucrat::promote()
{
	if (_grade > 1)
	{
		this->_grade--;
	}
	else
	{
		throw(GradeTooHighException());
	}
}

void	Bureaucrat::demote()
{
	if (_grade < 150)
	{
		this->_grade++;
	}
	else
	{
		throw(GradeTooLowException());
	}
}

std::ostream& operator <<(std::ostream& out, const Bureaucrat& bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return(out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Error grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Error grade is too low!");
}