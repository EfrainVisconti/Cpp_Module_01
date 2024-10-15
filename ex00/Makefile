# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 17:15:01 by eviscont          #+#    #+#              #
#    Updated: 2024/10/15 18:03:01 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies

CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
HDRS = Zombie.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re