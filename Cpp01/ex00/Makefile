# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 03:30:08 by yismaail          #+#    #+#              #
#    Updated: 2023/08/14 13:51:33 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie
CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf
SRCS		=	main.cpp randomChump.cpp newZombie.cpp Zombie.cpp


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