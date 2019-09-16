/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:41:23 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/11 19:01:40 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			run;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	run = 0;
	if (!dst && !src)
		return (NULL);
	if (s >= d)
	{
		while (run < len)
		{
			*(d + run) = *(s + run);
			run++;
		}
	}
	else
		while (len--)
			*(d + len) = *(s + len);
	return (dst);
}
