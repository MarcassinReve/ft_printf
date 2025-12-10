# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 14:26:18 by fblanc            #+#    #+#              #
#    Updated: 2025/11/10 13:43:53 by fblanc           ###   ####lausanne.ch    #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a
SRC =	ft_printf.c ft_printf_char.c  ft_printf_decimal.c  ft_printf_dispatcher.c\
		ft_printf_hexa_upcase.c ft_printf_hexa_void.c ft_printf_hexa_lowcase.c ft_printf_int.c\
		ft_printf_percent.c  ft_printf_str.c  ft_printf_unsigned_decimal.c
OBJ =	$(SRC:.c=.o)
LIBFT =	./libft/libft.a
CC =	cc
CFLAGS = -Wall -Wextra -Werror -I ./libft
AR = ar rcs

all : $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C ./libft

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
clean:
	@$(MAKE) clean -C ./libft
	rm -f $(OBJ)

fclean: clean
	@$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
