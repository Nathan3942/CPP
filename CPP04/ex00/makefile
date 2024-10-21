# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/21 18:36:41 by njeanbou          #+#    #+#              #
#    Updated: 2024/08/21 18:44:04 by njeanbou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Poly

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -static-libasan
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