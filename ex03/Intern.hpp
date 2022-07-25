#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern& copi);
		Intern& operator =(const Intern& copi);
		~Intern();
		Form*	makeForm(const std::string& name, const std::string& target);

	private:
		std::string	_forms[3];
		int pos;
		Form*	_to_del[1000];

	protected:

};

#endif