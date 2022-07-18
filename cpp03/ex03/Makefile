NAME = DiamondTrap
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow
RM = rm -rf
CC = clang++

SRC = FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp ClapTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp ClapTrap.cpp main.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
