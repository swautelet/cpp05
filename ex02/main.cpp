#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat paul("Paul", 1);
	Bureaucrat roger("Roger", 150);
	std::cout << paul;
	Form form("test", 20, 20);
	try
	{
		Form fail("fail", 0, 12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		paul.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}