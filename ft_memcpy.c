/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:21:00 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 17:15:27 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ds;
	unsigned char *sr;
	
	ds = dst;
	sr = (unsigned char *) src;
	while (n > 0)
	{
		n--;
		ds[n] = sr[n];
	}
	return (ds);
}
