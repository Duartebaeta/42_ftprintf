/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:45:22 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/14 15:47:14 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_di(int data)
{
	int	counter;

	counter = 0;
	while (data != 0)
	{
		data /= 10;
		counter++;
	}
	ft_putnubr_fd(data, 1);
	return (counter);
}
