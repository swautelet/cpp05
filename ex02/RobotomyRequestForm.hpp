#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm:public Form{
	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copi);
		RobotomyRequestForm&	operator =(const RobotomyRequestForm& copi);
		~RobotomyRequestForm();
		virtual void	execute(const Bureaucrat& signat) const;
		const std::string gettarget() const;

	private:
		RobotomyRequestForm();
		const std::string _target;

	protected:

};

#endif