FILE =	main		\
	Animal		\
	WrongAnimal		\
	Cat		\
	WrongCat		\
	Dog		\

NAME = Animal

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 

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

re: fclean all

.PHONY : clean fclean all re
