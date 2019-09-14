# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckumera <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 17:16:10 by ckumera           #+#    #+#              #
#    Updated: 2019/09/10 23:53:01 by ckumera          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OFILES = *.o
SRCS = ft_putchar.c \
	   ft_itoa.c \
	   ft_count_digits.c \
	   ft_strlen.c \
	   ft_strrev.c \
	   ft_get_negative.c \
	   ft_single_itoa.c \
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
	   ft_strncmp.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_cut_str.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_memalloc.c \
	   ft_strnew.c \
	   ft_memdel.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c
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
