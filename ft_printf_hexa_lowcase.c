/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_lowcase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:48:04 by fblanc            #+#    #+#             */
/*   Updated: 2025/10/30 15:48:05 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_printf_hexa_lowcase(unsigned int nbr)
{
	char *base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_printf_hexa_lowcase(nbr / 16);
	}
	if (nbr < 16)
		ft_putchar(base[nbr & 16]);
}
