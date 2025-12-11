# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                            :+:    :+:            #
#                                                     +:+ +:+         +:+      #
#    By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 14:26:18 by fblanc            #+#    #+#              #
#    Updated: 2025/12/11 15:30:09 by fblanc         ########   odam.nl         #
#                                                                              #
# **************************************************************************** #
NAME	= libftprintf.a

SRC		= ft_printf.c \
		  ft_printf_char.c \
		  ft_printf_decimal.c \
		  ft_printf_dispatcher.c \
		  ft_printf_hexa_upcase.c \
		  ft_printf_hexa_void.c \
		  ft_printf_hexa_lowcase.c \
		  ft_printf_int.c \
		  ft_printf_percent.c \
		  ft_printf_str.c \
		  ft_printf_unsigned_decimal.c \
		  ft_puthexa_up.c \
		  ft_puthexa_low.c \
		  ft_putstr.c \
		  ft_putchar.c \
		  ft_putnbr_unsigned_fd.c \
		  ft_putnbr_fd.c \
		  ft_putchar_fd.c

OBJ		= $(SRC:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
