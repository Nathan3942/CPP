# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 11:03:30 by njeanbou          #+#    #+#              #
#    Updated: 2024/11/22 19:16:29 by njeanbou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -static-libasan
CC = c++
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(NAME)

fclean: clean
		$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re