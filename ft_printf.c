/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:50:37 by fblanc            #+#    #+#             */
/*   Updated: 2025/10/30 15:43:54 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list list;

	va_start(list, format)
}

//va_arg(list, type) => acces the next argument. Cant be call more than the number of arg pass. type is the type of arg to retrieve
// va_end(list)  a la fin pour tt clean
