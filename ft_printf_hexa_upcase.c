/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_upcase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:48:49 by fblanc            #+#    #+#             */
/*   Updated: 2025/11/10 16:32:26 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "ft_printf.h"

int	ft_printf_hexa_upcase(unsigned int nbr)
{
	return(ft_puthexa_up(nbr));
}
