# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andre <andre@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 15:50:55 by andre             #+#    #+#              #
#    Updated: 2024/09/27 16:02:35 by andre            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_cat
CC=cc
FLAGS=-Wall -Wextra -Werror
SRC=ft_cat.c
OBJ=	${SRC: .c = .o}

all:	${NAME}

${NAME}:	${OBJ}
	${CC}	${FLAGS}	-o	${NAME}	${OBJ}

${SRC}:	${OBJ}
	${CC}	${FLAGS}	-c	$<	-o	$@
	
clean:
	rm -rf	${OBJ}

fclean:	clean
	rm -f	${NAME}

re: fclean	clean

.PHONY:	all	fclean	clean	re