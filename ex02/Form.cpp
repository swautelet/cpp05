# include "Form.hpp"

Form::Form(std::string name, int gradesign, int gradexec):_name(name), _to_exec(gradexec), _to_sign(gradesign), _signed(false)
{
	if (this->_to_exec < 1 || this->_to_sign < 1)
	{
		throw(GradeTooHighException());
	}
	if (this->_to_exec > 150 || this->_to_sign > 150)
	{
		throw(GradeTooLowException());
	}
}
Form::Form(const Form& copi):_name(copi._name), _to_exec(copi._to_exec), _to_sign(copi._to_sign), _signed(copi._signed)
{

}

Form::~Form()
{

}

Form& Form::operator =(const Form& copi)
{
	//nonsense
	(void) copi;
	return(*this);
}
const std::string Form::getName() const
{
	return (this->_name);
}

bool	Form::getsigned() const
{
	return (this->_signed);
}

int	Form::get_to_sign() const
{
	return (this->_to_sign);
}

int	Form::get_to_exec() const
{
	return (this->_to_exec);
}

Form::Form():_name("nonsense"), _to_exec(0), _to_sign(0)
{

}

void	Form::beSigned(const Bureaucrat& signat)
{
	int sigrade = signat.getGrade();
	if (sigrade <= this->_to_sign && this->_signed == false)
	{
		this->_signed = true;
	}
	else if (this->_signed == true)
	{
		throw(GradeTooLowException());
	}
	else{
		throw(GradeTooHighException());
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("Error grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Error grade is too low!");
}

std::ostream& operator <<(std::ostream& out, const Form& nb)
{
	out << "Form : " << nb.getName() << " Grade to sign : " << nb.get_to_sign() << " Grade to exec : " << nb.get_to_exec();
	if (nb.getsigned() == true)
	{
		out << " is signed!" << std::endl;
	}
	else
	{
		out << " is not signed!" << std::endl;
	}
	return(out);
}