/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:21:23 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 01:45:55 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char		*dst;
	size_t		a;
	size_t		run;

	run = 0;
	a = ft_strlen(s1);
	if (!(dst = (char*)malloc(sizeof(char) * (a + 1))))
		return (NULL);
	while (run != a)
	{
		dst[run] = (char)s1[run];
		run++;
	}
	dst[run] = '\0';
	return (dst);
}
