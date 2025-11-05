/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:50:37 by fblanc            #+#    #+#             */
/*   Updated: 2025/11/05 16:42:49 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		total;
	va_list	list;

	total = 0;
	va_start(list, format);

	if (format == "%" && *(format +1)) // trouver le %qqchose et lenvoyer au dispatcher
	{
		format++;
		dispatcher(*format, &list);
	}
	va_end(list);
	return (total);
}

//va_arg(list, type) => acces the next argument. Cant be call more than the number of arg pass. type is the type of arg to retrieve
// va_end(list)  a la fin pour tt clean
//
// 
