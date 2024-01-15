# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 17:04:11 by yismaail          #+#    #+#              #
#    Updated: 2024/01/12 19:38:05 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	RPN
CPP			=	c++

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
RM			=	rm -rf
SRCS		=	main.cpp RPN.cpp


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