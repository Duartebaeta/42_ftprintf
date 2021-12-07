# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:49:59 by dhomem-d          #+#    #+#              #
#    Updated: 2021/12/07 15:49:59 by dhomem-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall, -Wextra and -Werror -L./libft -lft

SRCS = ft_printf ft_selector \

OBJS = $(SRCS:.c=.o)
RM = rm -f
INCLUDES = libftprintf.h


.c.o:
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)
	cd /libft && $(MAKE) -f makefile

clen:
	$(RM) $(NAME)

re: fclean all