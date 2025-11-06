/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_lowcase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:48:04 by fblanc            #+#    #+#             */
/*   Updated: 2025/11/05 16:19:07 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf_hexa_lowcase(unsigned int nbr)
{
	if (!nbr)
		return ;
	return (ft_puthexa_low(nbr));
}
