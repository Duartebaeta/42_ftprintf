/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:39:37 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/07 16:38:45 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_x()
{
	
}

void	ft_printf_u(unsigned int data)
{
	if (data > 9)
	{
		ft_printf_u(data / 10);
		ft_putchar_fd(data % 10, 1);
	}
	else
		ft_putchar_fd(data % 10, 1);
}

void	ft_selector(char param, void *data)
{
	if (param == 'c')
		ft_putchar(data);
	else if (param == 's')
		ft_putstr(data);
	else if (param == 'p')
		ft_printf_p(data);
	else if (param == 'd')
		ft_putnubr_fd(data, 1);
	else if (param == 'i')
		ft_putnubr_fd(data, 1);
	else if (param == 'u')
		ft_printf_u(data);
	else if (param == 'x')
		ft_printf_x(data);
	else if (param == 'X')
		ft_printf_X(data);
	else if (param == '%')
		ft_putchar('%');
	else
		ft_putstr("ERROR");
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
			if(ft_strchr("cspdiuxX%", format[counter + 1]) != NULL)
			{
				ft_selector(format[counter + 1], va_arg(args, void*));
				counter += 2;
			}
		else
			ft_putchar(format[counter++]);
	}
	va_end(args);
}

int main()
{
	char test = 'd';
	ft_printf("ola ola %c", test);
	return 0;
}
