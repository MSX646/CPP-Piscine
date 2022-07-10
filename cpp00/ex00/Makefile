# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kezekiel <kezekiel@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 16:02:51 by kezekiel          #+#    #+#              #
#    Updated: 2022/07/07 17:04:36 by kezekiel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


RM = rm -f

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = clang++

FLAGS= -Wall -Wextra -Werror

NAME= megaphone

all: $(NAME) 
	
$(NAME): $(OBJS)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean flclean re
