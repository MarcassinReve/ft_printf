/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:50:37 by fblanc            #+#    #+#             */
/*   Updated: 2025/11/10 17:32:41 by fblanc           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *phrase, ...)
{
	int		total;
	va_list	list;
	int	verif;

	total = 0;
	if (!phrase)
		return (-1);
	va_start(list, phrase);

	while (*phrase)
	{
		if (*phrase == '%' && *(phrase + 1)) 
		{
			phrase++;
			verif = ft_printf_dispatcher(*phrase, &list);
			if (verif == -1)
				return(write(1, "(null)", 6));
			total += verif;
		}
		else
		{
			total += write(1, phrase, 1);
		}
		phrase++;
	}
	va_end(list);
	return (total);
}