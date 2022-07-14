NAME = BSP
FLAGS = -Wall -Wextra -Werror -g3
RM = rm -rf
CC = clang++

SRC = Fixed.cpp bsp.cpp Point.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp Fixed.cpp bsp.cpp Point.cpp main.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
