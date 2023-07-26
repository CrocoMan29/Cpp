# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 00:56:56 by yismaail          #+#    #+#              #
#    Updated: 2023/07/26 23:47:32 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
CC			=	c++

CFLAGS		=	-std=c++98
RM			=	rm -rf
SRCS		=	main.cpp contact.cpp phoneBook.cpp


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