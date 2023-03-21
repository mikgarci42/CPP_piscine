FILE =	main		\
	Brain		\
	Animal		\
	Cat		\
	Dog		\

NAME = Animal

CXX = clang++

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
