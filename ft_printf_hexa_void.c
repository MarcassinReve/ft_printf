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

void	ft_printf_hexa(void *p)
{
	unsigned long	adrs;

	if(!p)
		return ;
	adrs = (unsigned long)p;
	if (adrs = 0)
	{
		write(1, "(nil)", 5);
		return ;
	}
	write (1, "0x", 2);
	ft_puthexa_low(adrs);
}
