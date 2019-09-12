/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:52:43 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/10 21:17:42 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_count_digits(int f);
char	*ft_get_negative(char *s);
char	ft_single_itoa(int a);
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
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_cut_str(char *victum, int len);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
