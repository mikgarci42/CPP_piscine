FILE =	main		\
	Brain		\
	Animal		\
	Cat		\
	Dog		\

NAME = Animal

CXX = clang++

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
	rm -rf *.swp

re: fclean all
	$(RM) *.a
	$(RM) -r *.dSYM
	$(RM) -r .*.swp
	$(RM) -r *.swp

.PHONY : clean fclean all re
