/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                             :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:58:00 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 15:19:11 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned_fd(unsigned int nbr, int fd)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count = ft_putnbr_unsigned_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
	count += 1;
	return (count);
}
