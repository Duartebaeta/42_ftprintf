/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:39:37 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/13 17:15:29 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	change_base(unsigned int data, int selec)
{
	char	*hex_base;
	
	hex_base = "0123456789abcdef\0";
	if (selec == 1)
	{
		while(*hex_base != '\0')
		{
			ft_toupper(*hex_base);
			hex_base++;
		}
	}
	return (hex_base[data]);
}

int	ft_printf_xX(unsigned int data, int selec)
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

int	ft_printf_p(unsigned long data)
{
	int	counter;

	counter = 0;
	if (data / 16 != 0)
	{
		ft_printf_p(data / 16);
		ft_putchar_fd(change_base(data % 16, 0), 1);
		counter++;
	}
	else
	{
		ft_putchar_fd(change_base(data % 16, 0), 1);
		counter++;
	}
	return (counter + 2);
}


int	ft_selector(char param, void *data)
{
	if (param == 'c')
		ft_putchar_fd(data, 1);
	else if (param == 's')
		ft_putstr_fd(data);
	else if (param == 'p')
	{
		ft_putstr_fd("0x", 1);
		return(ft_printf_p(data));		
	}
	else if (param == 'd')
		ft_putnubr_fd(data, 1);
	else if (param == 'i')
		ft_putnubr_fd(data, 1);
	else if (param == 'u')
		ft_printf_u(data);
	else if (param == 'x')
		ft_printf_xX(data, 0);
	else if (param == 'X')
		ft_printf_xX(data, 1);
	else if (param == '%')
		ft_putchar_fd('%', 1);
	else
		ft_putstr("ERROR");
}

void	ft_printf(const char *format, ...)
{
	va_list	args;
	int	counter;
	int	total;

	va_start(args, format);
	counter = 0;
	total = 0;
	while (format[counter] != '\0')
	{
		if(format[counter] == '%')
			if(ft_strchr("cspdiuxX%", format[counter + 1]) != NULL)
			{
				total += ft_selector(format[counter + 1], va_arg(args, void*));
				counter += 2;
			}
		else
		{
			ft_putchar(format[counter++]);
			total++;
		}
	}
	va_end(args);
}

int main()
{
	char test = 'd';
	ft_printf("ola ola %c", test);
	return 0;
}
