#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern lol;
	Form* test[3];
	Bureaucrat roger("Roger", 1);
	test[0] = lol.makeForm("shrubbery creation", "home");
	test[1] = lol.makeForm("presidential pardon", "Zaphrod");
	test[2] = lol.makeForm("robotomy request", "roger");
	for (int i = 0; i < 3; i++)
	{
		roger.signForm(*test[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		roger.executeForm(*test[i]);
	}
}