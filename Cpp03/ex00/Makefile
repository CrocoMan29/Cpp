# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 17:33:49 by yismaail          #+#    #+#              #
#    Updated: 2023/10/07 17:34:32 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ClapTrap
CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
RM			=	rm -rf
SRCS		=	main.cpp ClapTrap.cpp


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