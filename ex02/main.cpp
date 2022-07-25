#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat paul("Paul", 1);
	Bureaucrat roger("Roger", 150);

	ShrubberyCreationForm shrub("home");
	RobotomyRequestForm robot("Roger");
	PresidentialPardonForm zaph("Zaphrod");

	try
	{
		roger.signForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		roger.signForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		roger.signForm(zaph);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		paul.signForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		paul.signForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		paul.signForm(zaph);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		roger.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()  << " I can't execute this form!" << std::endl;
	}
	try
	{
		roger.executeForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()  << " I can't execute this form!" << std::endl;
	}
	try
	{
		roger.executeForm(zaph);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()  << " I can't execute this form!" << std::endl;
	}

	try
	{
		paul.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 4; i++)
	{
		try
		{
			paul.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	try
	{
		paul.executeForm(zaph);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}