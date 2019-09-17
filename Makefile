# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckumera <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 17:16:10 by ckumera           #+#    #+#              #
#    Updated: 2019/09/17 22:26:46 by ckumera          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libft.a
# OFILES = *.o
# SRCS = ft_putchar.c \
# 	   ft_itoa.c \
# 	   ft_count_digits.c \
# 	   ft_strlen.c \
# 	   ft_strrev.c \
# 	   ft_get_negative.c \
# 	   ft_single_itoa.c \
# 	   ft_memcpy.c \
# 	   ft_strdup.c \
# 	   ft_toupper.c \
# 	   ft_tolower.c \
# 	   ft_strcpy.c \
# 	   ft_strncpy.c \
# 	   ft_strcmp.c \
# 	   ft_isprint.c \
# 	   ft_isascii.c \
# 	   ft_isalpha.c \
# 	   ft_isdigit.c \
# 	   ft_isalnum.c \
# 	   ft_atoi.c \
# 	   ft_memset.c \
# 	   ft_bzero.c \
# 	   ft_strcat.c \
# 	   ft_strncat.c \
# 	   ft_memccpy.c \
# 	   ft_memmove.c \
# 	   ft_memcmp.c \
# 	   ft_memchr.c \
# 	   ft_strncmp.c \
# 	   ft_strlcat.c \
# 	   ft_strchr.c \
# 	   ft_strrchr.c \
# 	   ft_cut_str.c \
# 	   ft_strstr.c \
# 	   ft_strnstr.c \
# 	   ft_memalloc.c \
# 	   ft_strnew.c \
# 	   ft_memdel.c \
# 	   ft_strdel.c \
# 	   ft_strclr.c \
# 	   ft_striter.c \
# 	   ft_striteri.c \
# 	   ft_strmap.c \
# 	   ft_strmapi.c \
# 	   ft_strequ.c \
# 	   ft_strnequ.c \
# 	   ft_strsub.c \
# 	   ft_strjoin.c \
# 	   ft_strtrim.c \
# 	   ft_tabulation_len.c \
# 	   ft_strsplit.c \
# 	   ft_create_str.c \
# 	   ft_found_len.c \
# 	   ft_words_counter.c \
# 	   ft_putchar_fd.c \
# 	   ft_putstr_fd.c \
# 	   ft_putstr.c \
# 	   ft_putnbr_fd.c \
# 	   ft_putnbr.c \
# 	   ft_putendl_fd.c \
# 	   ft_putendl.c \
# 	   ft_lstnew.c \
# 	   ft_lstdelone.c \
# 	   ft_lstdel.c \
# 	   ft_lstadd.c
# FLAGS = -Wall -Wextra -Werror
# INCLUDES = libft.h
#
# all: $(NAME)
#
# $(NAME):
# 	gcc $(FLAGS) -c $(SRCS) -I $(INCLUDES)
# 	ar rc $(NAME) $(OFILES)
#
# clean:
# 	rm -f $(OFILES)
#
# fclean: clean
# 	rm -f $(NAME)
#
# re: fclean all


SRCS = ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memccpy.c \
        ft_memmove.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strlen.c \
        ft_strdup.c \
        ft_strcpy.c \
        ft_strncpy.c \
        ft_strcat.c \
        ft_strncat.c \
        ft_strlcat.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strstr.c \
        ft_strnstr.c \
        ft_strcmp.c \
        ft_strncmp.c \
        ft_atoi.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_memalloc.c \
        ft_memdel.c \
        ft_strnew.c \
        ft_strdel.c \
        ft_strclr.c \
        ft_striter.c \
        ft_striteri.c \
        ft_strmap.c \
        ft_strmapi.c \
        ft_strequ.c \
        ft_strnequ.c \
        ft_strsub.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_strsplit.c \
        ft_itoa.c \
        ft_putchar.c \
        ft_putnbr.c \
        ft_putstr.c \
        ft_putendl.c \
        ft_putchar_fd.c \
        ft_putnbr_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_lstnew.c \
        ft_lstdelone.c \
        ft_lstdel.c \
        ft_lstadd.c \
        ft_strrev.c \
        ft_count_digits.c \
        ft_single_itoa.c \
        ft_get_negative.c \
        ft_cut_str.c \
        ft_create_str.c \
        ft_found_len.c \
        ft_words_counter.c \
        ft_tabulation_len.c \
        ft_lstiter.c \
        ft_lstmap.c
OBJ = $(SRCS:%.c=%.o)
NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rc $(NAME) $(OBJ)

$(OBJ): %.o:%.c
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
