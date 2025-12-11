/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_puthexa_up.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: fblanc <fblanc@student.42lausanne.ch>         +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/12/11 13:51:17 by fblanc         #+#    #+#                */
/*   Updated: 2025/12/11 15:17:44 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_up(unsigned int nbr)
{
	char	*base;
	int		total;

	total = 0;
	base = "0123456789ABCDEF";
	if (nbr >= 16)
		total += ft_puthexa_up(nbr / 16);
	ft_putchar(base[nbr % 16]);
	total++;
	return (total);
}
