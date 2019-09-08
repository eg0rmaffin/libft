/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:52:43 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 20:10:28 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_count_digits(int f);
char	*get_negative(char *s);
char	single_itoa(int a);
char	*ft_strrev(char *s);
int		ft_strlen(char *s);
char    *ft_itoa(int n);
int		ft_toupper(int a);
int		ft_tolower(int a);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_strcmp(char *s1, char *s2);
int		ft_isprint(int a);
int		ft_isascii(int a);
int		ft_isalpha(int a);
int		ft_isdigit(int a);
int		ft_isalnum(int a);
int		ft_atoi(char *str);

#endif
