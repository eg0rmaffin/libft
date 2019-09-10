/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:41:23 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/10 18:16:23 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t run;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	run = 0;
	while (run < len && src != '\0')
	{
		d[run] = s[run];
		run++;
	}
	return (dst);
}
