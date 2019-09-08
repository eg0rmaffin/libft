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

char	*ft_strdup(char *src)
{
	char	*dst;
	int		a;
	int		run;

	run = 0;
	a = ft_strlen(src);
	if (!(dst = (char*)malloc(sizeof(char) * (a + 1))))
		return (NULL);
	while (run != a)
	{
		dst[run] = src[run];
		run++;
	}
	dst[run] = '\0';
	return (dst);
}
