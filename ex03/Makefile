SRC = Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp  RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp
NAME = bureaucrat
CPPFLAGS = -Werror -Wextra -Wall -std=c++98
OBJ=$(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

.o:.cpp
	c++ -c $(CPPFLAGS) $? 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

save :
	git commit -am "$(MAKECMDGOALS)"
	git push https://github.com/swautelet/cpp05.git

.phony : fclean clean re all