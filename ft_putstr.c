/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:36:10 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 15:21:05 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	total;
	int	i;
	int	verif;

	total = 0;
	i = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		verif = write(1, &s[i], 1);
		if (verif < 0)
			return (-1);
		total++;
		i++;
	}
	return (total);
}
