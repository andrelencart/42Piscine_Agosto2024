# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andre <andre@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 00:14:22 by andre             #+#    #+#              #
#    Updated: 2024/09/25 18:43:09 by andre            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_display_file
CC=cc
FLAGS=-Wall -Wextra -Werror
SRC=ft_display_file.c
OBJ=	${SRC: .c = .o}

all:	${NAME}

${NAME}:	${OBJ}
	${CC}	${FLAGS}	-o	${NAME}	${OBJ}

${SRC}:	${OBJ}
	${CC}	${FLAGS}	-c	$<	-o	$@

clean:
	rm	-rf	${OBJ}

fclean:	clean
	rm	-f	${NAME}

re:	fclean	clean