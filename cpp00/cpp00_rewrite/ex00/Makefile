# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 22:59:57 by nkietwee          #+#    #+#              #
#    Updated: 2023/12/17 23:00:00 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= megaphone.cpp

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