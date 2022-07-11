NAME = Violence
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = clang++

SRC = Weapon.cpp HumanB.cpp HumanA.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp Weapon.cpp HumanB.cpp HumanA.cpp main.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
