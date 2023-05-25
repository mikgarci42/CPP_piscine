FILE =	main					\
		Bureaucrat				\
		AForm					\
		ShrubberyCreationForm	\
		RobotomyRequestForm		\
		PresidentialPardonForm	\
		Intern					\

NAME = Bureaucrat

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -g3 -std=c++98 -fsanitize=address

SRC = $(addsuffix .cpp, $(FILE))
OBJ = $(addsuffix .o, $(FILE))

all: $(NAME)

$(NAME): $(OBJ) 
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) *_shruberry

re: fclean all

.PHONY : clean fclean all re
