/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_upcase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:48:49 by fblanc            #+#    #+#             */
/*   Updated: 2025/10/30 15:48:50 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "ft_printf.h"

void	ft_printf_hexa_upcase(unsigned int nbr)
{
	char *base;

	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_printf_hexa_lowcase(nbr / 16);
	}
	if (nbr < 16)
		ft_putchar(base[nbr & 16]);
}
