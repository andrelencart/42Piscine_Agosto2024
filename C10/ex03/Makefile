# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andre <andre@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 16:57:05 by andre             #+#    #+#              #
#    Updated: 2024/10/08 21:08:17 by andre            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_hexdump
CC=cc
FLAGS=-Wextra -Wall -Werror
SRC=ft_hexdump.c
OBJ=	${SRC:.c=.o}

all:	${NAME}

${NAME}:	${OBJ}
	${CC}	${FLAGS} -o $@	$^

clean:
	rm	-rf	${OBJ}

fclean:	clean
	rm	-f	${NAME}

re:	fclean	all

.PHONY:	all	fclean	clean	re
