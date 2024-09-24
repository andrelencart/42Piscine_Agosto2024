# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andre <andre@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 21:51:42 by andre             #+#    #+#              #
#    Updated: 2024/09/19 21:40:26 by andre            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY_NAME = "libft.a"
cc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc $LIBRARY_NAME ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib $LIBRARY_NAME
rm -f *.o
echo "$LIBRARY_NAME criada com sucesso!"




LIBRARY_NAME = "libft.a"
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f
FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ = ${FILES:.c=.o}
all: ${LIBRARY_NAME}
${LIBRARY_NAME}: ${OBJ}
	ar rcs ${LIBRARY_NAME} ${OBJ}
clean:
	${RM} ${OBJ}
fclean: clean
	${RM} ${LIBRARY_NAME}
re:	fclean ${LIBRARY_NAME}


