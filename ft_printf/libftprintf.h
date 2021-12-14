/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:36:56 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/14 18:09:34 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_selector(char param, void *data);
int		ft_printf_u(unsigned int data);
char	change_base(unsigned int data, int selec);
int		ft_printf_x(unsigned int data, int selec);
int		ft_printf_p(unsigned long data);
int		ft_printf_c(char data);
int		ft_printf_di(int data);
int		ft_printf_s(char *data);

#endif