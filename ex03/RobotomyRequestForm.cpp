#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("robotomyrequestform", 72, 45)
{
	std::srand((unsigned)time(0));
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target):Form("robotomyrequestform", 72, 45), _target(target)
{
	std::srand((unsigned)time(0));
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copi):Form(copi.getName(), copi.get_to_sign(), copi.get_to_exec()), _target(copi.gettarget())
{
	std::srand((unsigned)time(0));
}

RobotomyRequestForm& RobotomyRequestForm:: operator = (const RobotomyRequestForm& copi)
{
	//nonsense attributes are const
	(void) copi;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

const std::string	RobotomyRequestForm::gettarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(const Bureaucrat& signat) const
{
	// Makes some drilling noises. Then, informs that <target> has been robotomized
	// successfully 50% of the time. Otherwise, informs that the robotomy failed.
	Form::execute(signat);
	std::cout << "BZZZZZZZZZZ BRRRRRRRRRRR BZZZZZZ " << std::endl;
	// std::srand((unsigned)time(0));
	if (std::rand() % 2 == 0)
	{
		std::cout << this->_target << " has been robotomized successfully by " << signat.getName() << std::endl;
	}
	else
	{
		std::cout << "The lobotomy on " << this->_target << " has failed sorry!" << std::endl;
	}
}