# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 14:33:41 by al-humea          #+#    #+#              #
#    Updated: 2021/09/16 14:33:41 by al-humea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=		gcc

INCLUDES=	./includes/push_swap.h

UTILS=		./utils/display_error.c\
			./utils/ft_atops.c\
			./utils/ft_putstr_fd.c\
			./utils/ft_putchar_fd.c\
			./utils/stack_utils.c\

SRC=		./srcs/push_swap.c\
			./srcs/sort.c\
			./srcs/bubble.c\
			./srcs/basics/swap.c\
			./srcs/basics/rotate.c\
			./srcs/basics/r_rotate.c\
			./srcs/basics/push.c\

NAME= push_swap

CFLAGS=		-Wall -Wextra -Werror


RM=			rm -f

SRC_OBJ=	$(SRC:.c=.o)

UTL_OBJ=	$(UTILS:.c=.o)

$(NAME):	$(SRC_OBJ) $(UTL_OBJ)
	$(CC) $(CFLAGS) -I$(INCLUDES) $(SRC_OBJ) $(UTL_OBJ) -o $(NAME)


all:	$(NAME)

bonus: all

clean:
	$(RM) $(SRC_OBJ)
	$(RM) $(UTL_OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re