/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                      :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:36:48 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 15:18:10 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_rec(long n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_rec(n / 10, fd);
	c = '0' + (n % 10);
	count += write(fd, &c, 1);
	return (count);
}

int	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += write(fd, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
		return (count + write(fd, "0", 1));
	return (count + ft_putnbr_rec(nb, fd));
}

/*int	main()
{
	ft_putnbr_fd(0,1);
	return (0);
}*/
