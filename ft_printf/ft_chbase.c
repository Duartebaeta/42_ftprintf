/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chbase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:35:13 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/16 20:26:46 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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