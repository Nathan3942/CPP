# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 11:56:02 by njeanbou          #+#    #+#              #
#    Updated: 2024/11/26 15:11:46 by njeanbou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re