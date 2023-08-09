# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 10:13:57 by yismaail          #+#    #+#              #
#    Updated: 2023/08/09 11:10:27 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	main
CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
RM			=	rm -rf
SRCS		=	main.cpp


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