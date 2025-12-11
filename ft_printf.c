/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: fblanc <fblanc@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:50:37 by fblanc            #+#    #+#             */
/*   Updated: 2025/12/11 14:30:45 by fblanc         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	handle_conversion(const char **phrase, va_list *list, int *total)
{
	int	verif;

	if (**phrase == '%' && *(*phrase + 1))
	{
		(*phrase)++;
		verif = ft_printf_dispatcher(**phrase, list);
		if (verif == -1)
			return (-1);
		*total += verif;
	}
	else
		*total += write(1, *phrase, 1);
	return (0);
}

int	ft_printf(const char *phrase, ...)
{
	va_list	list;
	int		total;

	if (!phrase)
		return (-1);
	total = 0;
	va_start(list, phrase);
	while (*phrase)
	{
		if (handle_conversion(&phrase, &list, &total) == -1)
		{
			va_end(list);
			return (-1);
		}
		phrase++;
	}
	va_end(list);
	return (total);
}
