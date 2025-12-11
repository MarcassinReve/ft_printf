/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dispatcher.c                              :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:50:46 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 13:59:54 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_dispatcher(char speci, va_list *list)
{
	if (speci == 'c')
		return (ft_printf_char(va_arg(*list, int)));
	if (speci == 's')
		return (ft_printf_str(va_arg(*list, char *)));
	if (speci == 'p')
		return (ft_printf_hexa_void(va_arg(*list, void *)));
	if (speci == 'd' || speci == 'i')
		return (ft_printf_decimal(va_arg(*list, int)));
	if (speci == 'x')
		return (ft_printf_hexa_lowcase(va_arg(*list, unsigned int)));
	if (speci == 'X')
		return (ft_printf_hexa_upcase(va_arg(*list, unsigned int)));
	if (speci == 'u')
		return (ft_printf_unsigned_decimal(va_arg(*list, unsigned int)));
	if (speci == '%')
		return (ft_printf_char('%'));
	return (ft_printf_char('%') + ft_printf_char(speci));
}
