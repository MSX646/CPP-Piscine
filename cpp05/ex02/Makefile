NAME = Bureaucracy
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = clang++

SRC = PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Form.cpp Bureaucrat.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hppForm.hpp Bureaucrat.hpp main.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(RM) *_shrubbery

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
