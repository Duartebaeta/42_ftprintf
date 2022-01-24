/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:36:56 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/15 13:57:40 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_printf_u(unsigned int data);
char	change_base(unsigned int data, int selec);
int		ft_printf_x(unsigned int data, int selec);
int		ft_printf_p(unsigned long data);
int		ft_printf_c(char data);
int		ft_printf_di(int data);
int		ft_printf_s(char *data);
int		needsomelines(char c);

#endif