# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 21:07:53 by nkietwee          #+#    #+#              #
#    Updated: 2024/09/03 01:14:56 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= RPN

CC								= c++
RM								= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp \
		RPN.cpp

HEADER = RPN.hpp

OBJS	= $(SRCS:.cpp=.o)

%.o:%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean: clean
				$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re