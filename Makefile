# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckumera <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 17:16:10 by ckumera           #+#    #+#              #
#    Updated: 2019/09/09 23:30:08 by ckumera          ###   ########.fr        #
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
	   ft_atoi.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memcmp.c \
	   ft_memchr.c \
	   ft_strncmp.c
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
