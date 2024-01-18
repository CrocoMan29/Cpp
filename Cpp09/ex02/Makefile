# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 01:55:44 by yismaail          #+#    #+#              #
#    Updated: 2024/01/17 01:56:27 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	pmergeme
CPP			=	c++

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
RM			=	rm -rf
SRCS		=	main.cpp PmergeMe.cpp


OBJS		= ${SRCS:.cpp=.opp}

all			:	$(NAME)

$(NAME)		: $(SRCS)
			$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)
			
clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

re			: fclean all

.PHONY: all clean fclean re