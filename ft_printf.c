/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:50:37 by fblanc            #+#    #+#             */
/*   Updated: 2025/11/06 18:08:39 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *phrase, ...)
{
	int		total;
	va_list	list;

	total = 0;
	if (!phrase)
		return (-1);
	va_start(list, phrase);

	while (*phrase)
	{
		if (*phrase == '%' && *(phrase + 1)) 
		{
			phrase++;
			total += dispatcher(*phrase, &list);
		}
		else
		{
			total += write(1, phrase, 1);
		}
		phrase++;
	}
	va_end(list);
	return (total);
} // Modifie les sous fonctions pour add l additif du nb de char write
