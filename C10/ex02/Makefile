# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andre <andre@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 16:59:33 by andre             #+#    #+#              #
#    Updated: 2024/10/08 21:04:18 by andre            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_tail
CC=cc
FLAGS=-Wall -Wextra -Werror
SRC=ft_tail.c
OBJ=	${SRC:.c=.o}

all:	${NAME}

$(NAME):	$(OBJ)
	$(CC)	$(CFLAGS) -o $@ $^
	
clean:
	rm	-rf	${OBJ}

fclean:	clean
	rm	-f	${NAME}

re: fclean	all

.PHONY:	all	fclean	clean	re