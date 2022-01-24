/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chbase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:35:13 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/15 13:46:46 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	needsomelines(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

char	change_base(unsigned int data, int selec)
{
	char	*hex_base;
	char	*hex_base2;

	hex_base = "0123456789abcdef\0";
	hex_base2 = "0123456789ABCDEF\0";
	if (selec == 1)
		return (hex_base2[data]);
	return (hex_base[data]);
}