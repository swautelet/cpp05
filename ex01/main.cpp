#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test("Paul", 200);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat test("Paul", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat paul("Paul", 1);
	Bureaucrat roger("Roger", 150);
	try
	{
		paul.promote();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		roger.demote();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << roger;
	try
	{
		roger.promote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << roger;
	try
	{
		paul.demote();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << paul;
}