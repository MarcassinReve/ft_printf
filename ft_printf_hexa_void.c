/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_void.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:46:40 by fblanc            #+#    #+#             */
/*   Updated: 2025/11/05 16:22:37 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

static int	ft_puthexa_lowll(unsigned long long nbr)
{
	char	*base;
	int	total;

	total = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
		total += ft_puthexa_lowll(nbr / 16);
	ft_putchar(base[nbr % 16]);
	total++;
	return (total);
}

int	ft_printf_hexa(void *p)
{
	unsigned long	adrs;
	int		total;
	if(!p)
		return (0);
	adrs = (unsigned long long)p;
	if (!adrs)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	total = 2;
	return(total + ft_puthexa_lowll(adrs);
}
