# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 01:28:12 by yismaail          #+#    #+#              #
#    Updated: 2023/10/21 06:11:27 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Animal
CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
RM			=	rm -rf
SRCS		=	main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp


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