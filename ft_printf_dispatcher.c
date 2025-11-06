/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dispatcher.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:50:46 by fblanc            #+#    #+#             */
/*   Updated: 2025/11/06 18:06:28 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_dispatcher(char speci, va_list &list)
{
	if (speci = 'c')
		return (ft_printf_char(va_arg(*list, int)));
	if (speci = 's')
		return(ft_printf_str(va_arg(*list, char *)));
	if (speci = 'p')
		return(ft_printf_hexa_void(va_arg(*list, int));
	if (speci = 'd' || 'i')
		return(ft_printf_decimal(va_arg(*list, int));
	if (speci = 'x')
		return(ft_printf_hexa_low(va_arg(*list, unsigned int));
	if (speci = 'X')
		return(ft_printf_hexa_up(va_arg(*list, unsigned int));
	if (speci = 'p')
		return(ft_printf_char(va_arg(*list, void *));
	if (speci = '%')
		return(ft_printf_char('%');
	return (ft_printf_char('%') + ft_printf_char(speci));
}
