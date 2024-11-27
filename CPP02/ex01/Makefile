# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 17:23:41 by vboxuser          #+#    #+#              #
#    Updated: 2024/11/26 14:20:12 by njeanbou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra
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