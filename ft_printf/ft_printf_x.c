/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:42:07 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/14 15:47:05 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	change_base(unsigned int data, int selec)
{
	char	*hex_base;

	hex_base = "0123456789abcdef\0";
	if (selec == 1)
	{
		while (*hex_base != '\0')
		{
			ft_toupper(*hex_base);
			hex_base++;
		}
	}
	return (hex_base[data]);
}

int	ft_printf_x(unsigned int data, int selec)
{
	int	counter;

	counter = 0;
	if (data / 16 != 0)
	{
		ft_printf_x(data / 16, selec);
		ft_putchar_fd(change_base(data % 16, selec), 1);
		counter++;
	}
	else
	{
		ft_putchar_fd(change_base(data % 16, selec), 1);
		counter++;
	}
	return (counter);
}
