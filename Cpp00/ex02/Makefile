# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 00:56:56 by yismaail          #+#    #+#              #
#    Updated: 2023/08/01 03:09:29 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account
CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf
SRCS		=	main.cpp Account.cpp


OBJS		= ${SRCS:.cpp=.opp}

all			:	$(NAME)

$(NAME)		: $(SRCS)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
			
clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

re			: fclean all

.PHONY: all clean fclean re