# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 10:04:00 by yismaail          #+#    #+#              #
#    Updated: 2023/12/26 10:04:14 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	easyfind
CPP			=	c++

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
RM			=	rm -rf
SRCS		=	main.cpp


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