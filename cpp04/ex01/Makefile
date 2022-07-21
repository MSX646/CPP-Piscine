NAME = Animals
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = clang++

SRC = Animal.cpp Dog.cpp Cat.cpp  Brain.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp main.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
