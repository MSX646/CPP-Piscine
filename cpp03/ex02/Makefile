NAME = FragTrap
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = clang++

SRC = FragTrap.cpp ClapTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp ClapTrap.hpp main.hpp FragTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
