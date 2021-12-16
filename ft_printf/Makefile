# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:49:59 by dhomem-d          #+#    #+#              #
#    Updated: 2021/12/16 16:23:20 by dhomem-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c ft_selector.c ft_printf_u.c change_base.c \
		ft_printf_x.c ft_printf_p.c ft_printf_c.c ft_printf_di.c \
		ft_printf_s.c \

OBJS = $(SRCS:.c=.o)
RM = rm -f
LIBFT = libft
INCLUDES = libftprintf.h -L $(LIBFT) -lft


.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -o $@

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT) 

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

re: fclean all