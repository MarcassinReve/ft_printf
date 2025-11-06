/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:46:09 by fblanc            #+#    #+#             */
/*   Updated: 2025/10/30 16:50:09 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_print_decimal(int a)
{
	int	total;
	total = 0;
	if (!a)
		return (total);
	ft_putnbr_fd(a, 1);
	if (a == 0)
		return (1)
	if (a < 0)
	{
		a *= -1;
		total++;
	}
	while (a < 0)
	{
		a = a / 10;
		total++;
	}
	return (total);
	
}
