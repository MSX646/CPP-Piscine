NAME = Magic
FLAGS = -Wall -Wextra -Werror 
RM = rm -rf
CC = clang++

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp Fire.cpp MateriaSource.cpp main.cpp
OBJ = $(patsubst %.cpp,%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS)  $(OBJ) -o $(NAME)

%.o:%.cpp AMateria.hpp ICharacter.hpp IMateriaSource.hpp Character.hpp Cure.hpp Ice.hpp Fire.hpp MateriaSource.hpp main.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
