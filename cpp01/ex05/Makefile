# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 18:52:47 by nkietwee          #+#    #+#              #
#    Updated: 2023/12/22 19:59:12 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Harl_2.0

CC		= c++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp \

OBJS	= $(SRCS:.cpp=.o)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re