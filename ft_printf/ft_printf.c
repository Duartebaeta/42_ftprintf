/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:39:37 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/02 14:40:03 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_printf_c(char data)
{
	char	ret[2];

	ret[0] = data;
	ret[1] = '\0';
	return (ret);
}

char	*ft_printf_p(void *data)
{
	
}

char	*ft_selector(char param, void *data)
{
	if (param == 'c')
		return(ft_printf_c(data));
	else if (param == 's')
		return(data);
	else if (param == 'p')
		return(ft_printf_p(data));
	else if (param == 'd')
		return(ft_printf_d(data));
	else if (param == 'i')
		return(ft_printf_i(data));
	else if (param == 'u')
		return(ft_printf_u(data));
	else if (param == 'x')
		return(ft_printf_x(data));
	else if (param == 'X')
		return(ft_printf_X(data));
	else
		return("ERROR");
}

void	ft_printf(const char *format, ...)
{
	va_list	args;
	int	counter;

	va_start(args, format);
	counter = 0;
	while (format[counter] != '\0')
	{
		if(format[counter] == '%')
			if(ft_strchr("cspdiuxX", format[counter + 1]) != NULL)
			{
				ft_putstr(ft_selector(format[counter + 1], va_arg(args, void*)));
				counter += 2;
			}
			else if (format[counter + 1] == '%')
			{
				ft_putchar('%');
				counter += 2;
			}
		else
			ft_putchar(format[counter++]);
	}
	va_end(args);
}