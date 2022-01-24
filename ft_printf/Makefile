# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:49:59 by dhomem-d          #+#    #+#              #
#    Updated: 2022/01/15 14:11:40 by duartebaeta      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT = libft

LIBS = ft_printf.h -L./libft -lft

SRCS = ft_chbase.c ft_printf_c.c ft_printf_di.c ft_printf_p.c \
		ft_printf_s.c ft_printf_u.c ft_printf_x.c ft_printf.c \

OBJS  = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@make -C $(LIBFT)
		@cp libft/libft.a ./$(NAME)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)

.o.c:
		@$(CC) $(CFLAGS) -I $(LIBS) -o $@ -c $<

clean:
		@rm -f $(OBJS)
		@make clean -C $(LIBFT)

fclean: clean
		@rm -f $(NAME)
		@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re