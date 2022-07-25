#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("shrubberycreationform", 145, 137)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):Form("shrubberycreationform", 145, 137), _target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copi):Form(copi.getName(), copi.get_to_sign(), copi.get_to_exec()), _target(copi.gettarget())
{

}

ShrubberyCreationForm& ShrubberyCreationForm:: operator = (const ShrubberyCreationForm& copi)
{
	//nonsense attributes are const
	(void) copi;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

const std::string	ShrubberyCreationForm::gettarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& signat) const
{
	// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
	// inside it.
	Form::execute(signat);
	std::ofstream out;
	out.open(this->_target + "_shrubbery");
	if (out.is_open())
	{
		out << "            .        +          .      .          ." << std::endl;
		out << "     .            _        .                    ." << std::endl;
		out << "  ,              /;-._,-.____        ,-----.__" << std::endl;
		out << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
		out << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
		out << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
		out << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
		out << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
		out << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
		out << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7" << std::endl;
		out << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/" << std::endl;
		out << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
		out << ".               \":._:`\\____  /:'  /      .           ." << std::endl;
		out << "                    \\::.  :\\/:'  /              +" << std::endl;
		out << "   .                 `.:.  /:'  }      ." << std::endl;
		out << "           .           ):_(:;   \\           ." << std::endl;
		out << "                      /:. _/ ,  |" << std::endl;
		out << "                   . (|::.     ,`                  ." << std::endl;
		out << "     .                |::.    {\\" << std::endl;
		out << "                      |::.\\  \\ `." << std::endl;
		out << "                      |:::(\\    |" << std::endl;
		out << "              O       |:::/{ }  |                  (o" << std::endl;
		out << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
		out << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
		out << "dew   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~" << std::endl;
		std::cout << "Shrubbery tree created by " << signat.getName() << std::endl;
	}
	else
	{
		std::cout << "Shrubbery tree couldn't be created by " << signat.getName() << " because the target file couldn't be open"<< std::endl;
	}
}