/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                    :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:45:24 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 13:53:12 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf_char(int a)
{
	if (!a)
		return (-1);
	return (write(1, &a, 1));
}
