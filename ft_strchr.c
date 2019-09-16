/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:34:06 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/10 21:06:51 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		run;
	int		i;
	char	*str;

	run = 0;
	i = 0;
	str = (char*)s;
	if (c == 0)
	{
		while (s[run] != '\0')
			run++;
		return (&str[run]);
	}
	while (s[run] != '\0')
	{
		if (s[run] == c)
			return (&str[run]);
		run++;
	}
	return (NULL);
}
