# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:49:59 by dhomem-d          #+#    #+#              #
#    Updated: 2021/12/02 13:57:50 by dhomem-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall, -Wextra and -Werror -L../../42_libft/libft -lft

SRCS = 

OBJS = $(SRCS:.c=.o)
RM = rm -f
INCLUDES = libftprintf.h


.c.o:
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clen:
	$(RM) $(NAME)

re: fclean all