/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 23:08:38 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/09 23:16:37 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			run;

	run = 0;
	str = (unsigned char *)s;
	while (run < n)
	{
		if (str[run] == (unsigned char)c)
			return ((void*)str + run);
		run++;
	}
	return (NULL);
}
