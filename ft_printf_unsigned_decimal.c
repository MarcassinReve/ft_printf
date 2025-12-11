/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_decimal.c                        :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:47:17 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 15:15:06 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned_decimal(unsigned int a)
{
	return (ft_putnbr_unsigned_fd(a, 1));
}
