# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 19:04:27 by eviscont          #+#    #+#              #
#    Updated: 2024/10/15 19:23:56 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re