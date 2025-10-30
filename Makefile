# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 14:26:18 by fblanc            #+#    #+#              #
#    Updated: 2025/10/29 15:49:46 by fblanc           ###   ####lausanne.ch    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = 
OBJ = $(SRC:.c=.o)
LIBFT = ./libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./libft
AR = ar rcs

all : $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C ./libft

$(NAME): $(OBJ)
	cc $(OBJ) $(LIBFT) $(CFLAGS) -o $(NAME)

clean:
	@$(MAKE) clean -C ./libft
	rm -f $(OBJ)

fclean: clean
	@$(MAKE) fclean -c ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
