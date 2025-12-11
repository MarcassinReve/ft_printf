/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_puthexa_low.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: fblanc <fblanc@student.42lausanne.ch>         +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/12/11 13:49:44 by fblanc         #+#    #+#                */
/*   Updated: 2025/12/11 15:17:32 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_low(unsigned int nbr)
{
	char	*base;
	int		total;

	total = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
		total += ft_puthexa_low(nbr / 16);
	ft_putchar(base[nbr % 16]);
	total++;
	return (total);
}
