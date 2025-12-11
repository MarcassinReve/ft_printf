/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                     :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:44:58 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 14:00:12 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf_str(char *a)
{
	int	value;

	if (!a)
		return (write (1, "(null)", 6));
	value = ft_putstr(a);
	return (value);
}
