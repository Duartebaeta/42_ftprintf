/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:45:45 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/24 13:00:58 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int data)
{
	static int	counter;

	counter = 0;
	if (data > 9)
	{
		ft_printf_u(data / 10);
		ft_putchar_fd((data % 10) + '0', 1);
		counter++;
	}
	else
	{
		ft_putchar_fd((data % 10) + '0', 1);
		counter++;
	}
	return (counter);
}
