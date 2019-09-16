/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:21:00 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 22:13:30 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long int	run;
	unsigned char		*ds;
	unsigned char		*sr;

	run = 0;
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (!dst && !src && n != 0)
		return (NULL);
	while (run < n)
	{
		ds[run] = sr[run];
		run++;
	}
	return (dst);
}
