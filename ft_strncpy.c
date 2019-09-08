/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:39:09 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 17:09:47 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int run;
	long int lenb;

	if (src == NULL)
		return (dst);
	run = 0;
	lenb = len;
	while (run < lenb)
	{
		if (src[run])
			dst[run] = src[run];
		else
			dst[run] = '\0';
		run++;
	}
//	dst[run] = '\0';
	return (dst);
}
