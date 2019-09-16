/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:26:02 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/09 22:40:11 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			run;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	run = 0;
	while (run < n)
	{
		if (str1[run] - str2[run] != 0)
			return (str1[run] - str2[run]);
		run++;
	}
	return (0);
}
