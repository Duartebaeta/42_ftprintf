/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:39:37 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/14 18:03:08 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_selector(char param, void *data)
{
	if (param == 'c')
		return (ft_printf_c((char)data));
	else if (param == 's')
		return (ft_printf_s((char *)data));
	else if (param == 'p')
	{
		ft_putstr_fd("0x", 1);
		return (ft_printf_p((unsigned long)data));
	}
	else if (param == 'd')
		return (ft_printf_di((int)data));
	else if (param == 'i')
		return (ft_printf_di((int)data));
	else if (param == 'u')
		return (ft_printf_u((unsigned int)data));
	else if (param == 'x')
		return (ft_printf_x((unsigned int)data, 0));
	else if (param == 'X')
		return (ft_printf_x((unsigned int)data, 1));
	else if (param == '%')
		return (ft_printf_c('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		total;

	va_start(args, format);
	counter = 0;
	total = 0;
	while (format[counter] != '\0')
	{
		if (format[counter] == '%')
		{
			if (ft_strchr("cspdiuxX%", format[counter + 1]) != NULL)
			{
				total += ft_selector(format[counter + 1], va_arg(args, void *));
				counter += 2;
			}
		}
		else
		{
			ft_putchar_fd(format[counter++], 1);
			total++;
		}
	}
	va_end(args);
	return (total);
}
