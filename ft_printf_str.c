/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:44:58 by fblanc            #+#    #+#             */
/*   Updated: 2025/10/30 16:00:28 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf_str(char *a)
{
	if (!a)
	{
		write (1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(a, 1);
	return (ft_strlen(a));
}
