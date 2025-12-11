/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_void.c                               :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:46:40 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 13:55:27 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include "ft_printf.h"

static int	ft_puthexa_lowll(unsigned long long nbr)
{
	const char	*base;
	int			total;
	int			value;

	total = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		value = ft_puthexa_lowll(nbr / 16);
		if (value == -1)
			return (-1);
		total += value;
	}
	value = ft_putchar(base[nbr % 16]);
	if (value == -1)
		return (-1);
	total += value;
	return (total);
}

int	ft_printf_hexa_void(void *p)
{
	unsigned long long	adrs;
	int					total;
	int					value;

	if (!p)
	{
		value = write(1, "(nil)", 5);
		return (value);
	}
	adrs = (unsigned long long)p;
	total = 0;
	value = write (1, "0x", 2);
	if (value == -1)
		return (-1);
	total += 2;
	return (total + ft_puthexa_lowll(adrs));
}
