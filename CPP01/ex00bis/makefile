# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 02:01:03 by vboxuser          #+#    #+#              #
#    Updated: 2024/06/20 03:06:21 by vboxuser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -static-libasan
CC = c++
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re