#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("presidential pardon", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):Form("presidential pardon", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copi):Form(copi.getName(), copi.get_to_sign(), copi.get_to_exec()), _target(copi.gettarget())
{

}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& copi)
{
	//nonsense attributes are const
	(void) copi;
	// this->_target = copi.gettarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

const std::string	PresidentialPardonForm::gettarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(const Bureaucrat& signat) const
{
	Form::execute(signat);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	// Informs that <target> has been pardoned by Zaphod Beeblebrox.
}