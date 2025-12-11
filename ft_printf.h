/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:28:31 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 15:31:50 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <stdarg.h>

int		ft_printf(const char *phrase, ...);
int		ft_printf_char(int a);
int		ft_printf_decimal(int a);
int		ft_printf_dispatcher(char speci, va_list *list);
int		ft_printf_hexa_lowcase(unsigned int nbr);
int		ft_printf_hexa_upcase(unsigned int nbr);
int		ft_printf_hexa_void(void *p);
int		ft_printf_str(char *a);
int		ft_printf_unsigned_decimal(unsigned int a);
int		ft_putnbr_fd(int n, int fd);
int		ft_putnbr_unsigned_fd(unsigned int nbr, int fd);
int		ft_putstr(char *s);
int		ft_puthexa_low(unsigned int nbr);
int		ft_putchar(char a);
int		ft_puthexa_up(unsigned int nbr);
void	ft_putchar_fd(char c, int fd);

#endif
