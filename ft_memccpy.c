/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:54:55 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/09 22:18:29 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				run;

	run = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!n)
		return (NULL);
	while (run < n)
	{
		d[run] = s[run];
		if (s[run] == (unsigned char)c)
			return ((void*)(dst + (run + 1)));
		run++;
	}
	return (NULL);
}
