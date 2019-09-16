/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:15:16 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/11 00:08:57 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sign;
	int		run;

	sign = 0;
	run = 0;
	if (c == 0)
	{
		while (s[run])
			run++;
		return ((void *)(char *)s + run);
	}
	while (s[run] != '\0')
	{
		if (s[run] == c)
			sign = (void *)(char *)s + run;
		run++;
	}
	if (sign)
		return (sign);
	return (NULL);
}
