# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 16:42:01 by vboxuser          #+#    #+#              #
#    Updated: 2024/06/20 17:23:04 by vboxuser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = salut

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Werror -Wextra -Wall -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(OBJ) $(RM)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re