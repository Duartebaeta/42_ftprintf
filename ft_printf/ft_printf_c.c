/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:46:25 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/07 19:37:12 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(char data)
{
	ft_putchar_fd(data, 1);
	return (1);
}
