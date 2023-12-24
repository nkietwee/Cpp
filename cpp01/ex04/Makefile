# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 22:37:54 by nkietwee          #+#    #+#              #
#    Updated: 2023/12/22 18:46:07 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brain

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