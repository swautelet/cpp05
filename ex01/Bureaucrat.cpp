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

Bureaucrat::Bureaucrat(const Bureaucrat& copi):_name(copi.getName()), _grade(copi.getGrade())
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat& Bureaucrat::operator =(const Bureaucrat& copi)
{
	this->_grade = copi.getGrade();
	return(*this);
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

void	Bureaucrat::signForm(Form& tosign) const
{
	try
	{
		tosign.beSigned(*this);
		std::cout << this->getName() << " signed " << tosign.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::string lol = e.what();
		if (lol.compare("Error grade is too low!") == 0)
			std::cout << this->getName() << " couldn't signed " << tosign.getName() << " because grade is too low" << std::endl;
		else if (lol.compare("Error grade is too high!") == 0)
			std::cout << this->getName() << " couldn't signed " << tosign.getName() << " because is already signed" << std::endl;
		else
			std::cout << this->getName() << " couldn't signed " << tosign.getName() << " because of an unknowm reason" << std::endl;
	}
	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Error grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Error grade is too low!");
}