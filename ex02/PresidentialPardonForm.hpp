#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm:public Form{
	public:
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& copi);
		PresidentialPardonForm&	operator =(const PresidentialPardonForm& copi);
		~PresidentialPardonForm();
		virtual void	execute(const Bureaucrat& signat) const;
		const std::string gettarget() const;

	private:
		PresidentialPardonForm();
		const std::string _target;

	protected:
};

#endif