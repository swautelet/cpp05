#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm:public Form{
	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copi);
		ShrubberyCreationForm&	operator =(const ShrubberyCreationForm& copi);
		~ShrubberyCreationForm();
		virtual void	execute(const Bureaucrat& signat) const;
		const std::string gettarget() const;

	private:
		ShrubberyCreationForm();
		const std::string _target;

	protected:
};

#endif