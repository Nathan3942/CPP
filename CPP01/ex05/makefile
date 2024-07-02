# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 04:46:55 by vboxuser          #+#    #+#              #
#    Updated: 2024/06/24 10:50:51 by vboxuser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -static-libasan
CC = c++
RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re