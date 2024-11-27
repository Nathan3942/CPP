# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 17:15:30 by njeanbou          #+#    #+#              #
#    Updated: 2024/11/27 19:48:51 by njeanbou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = flagTrap

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -static-libsan
CC = c++
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(NAME)

fclean: clean
		$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re