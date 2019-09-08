# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckumera <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 17:16:10 by ckumera           #+#    #+#              #
#    Updated: 2019/09/08 20:10:01 by ckumera          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OFILES = *.o
SRCS = ft_putchar.c \
	   ft_itoa.c \
	   ft_count_digits.c \
	   ft_strlen.c \
	   ft_strrev.c \
	   get_negative.c \
	   single_itoa.c \
	   ft_memcpy.c \
	   ft_strdup.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcmp.c \
	   ft_isprint.c \
	   ft_isascii.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_atoi.c
FLAGS = -Wall -Wextra -Werror
INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
