# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andre <andre@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 23:56:28 by andre             #+#    #+#              #
#    Updated: 2024/09/19 00:31:18 by andre            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY_NAME = "libft.a"
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INCLUDE_DIR = includes
OBJ_DIR = obj
SRC = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c
OBJ = $(OBJ_DIR)/ft_putchar.o $(OBJ_DIR)/ft_swap.o $(OBJ_DIR)/ft_putstr.o $(OBJ_DIR)/ft_strlen.o $(OBJ_DIR)/ft_strcmp.o

all: $(LIBRARY_NAME)

$(LIBRARY_NAME): $(OBJ)
	ar rcs $(LIBRARY_NAME): $(OBJ)
	echo "$(LIBRARY_NAME) criada com sucesso!"
	
$(OBJ_DIR)/ft_putchar.o: $(SRC_DIR)/ft_putchar.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)/ft_swap.o: $(SRC_DIR)/ft_swap.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)/ft_putstr.o: $(SRC_DIR)/ft_putstr.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)/ft_strlen.o: $(SRC_DIR)/ft_strlen.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)/ft_strcmp.o: $(SRC_DIR)/ft_strcmp.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)
	echo "Arquivos .o removidos!"

fclean: clean
	rm -f $(LIBRARY_NAME)
	echo "$(LIBRARY_NAME) removida!"
	
re: fclean all
.PHONY: all clean fclean re