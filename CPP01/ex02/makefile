# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 16:42:01 by vboxuser          #+#    #+#              #
#    Updated: 2024/11/26 15:13:28 by njeanbou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = salut

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re