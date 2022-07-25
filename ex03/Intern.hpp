#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern& copi);
		Intern& operator =(const Intern& copi);
		~Intern();
		Form*	makeForm(const std::string& name, const std::string& target);

	private:
		std::string	_forms[4];
		
	protected:
};

#endif