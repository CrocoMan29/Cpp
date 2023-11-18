# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mac <mac@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 17:50:30 by yismaail          #+#    #+#              #
#    Updated: 2023/11/17 18:13:55 by mac              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Bereauctrat
CPP			=	c++

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
RM			=	rm -rf
SRCS		=	main.cpp Bureaucrat.cpp AForm.cpp


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