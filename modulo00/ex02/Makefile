FILE = Account \
	   tests	\

NAME = Account

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -g3 -std=c++98

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
	$(RM) -rf .*.swp
	$(RM) -rf *.dSYM
	$(RM) *.swp

re: fclean all

.PHONY : clean fclean all re
