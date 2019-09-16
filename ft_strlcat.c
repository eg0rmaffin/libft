/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:20:55 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/11 19:57:14 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t run;
	size_t i;
	size_t c;

	run = 0;
	i = 0;
	while (dst[run] && run < size)
		run++;
	while (src[i])
		i++;
	c = run + i;
	if (run == size)
		return (run + i);
	i = 0;
	while (run < size - 1)
		dst[run++] = src[i++];
	dst[run] = '\0';
	return (c);
}
