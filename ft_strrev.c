/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:01:05 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 00:04:06 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*dst;
	int		run;
	int		i;

	run = 0;
	i = 0;
	if (!(dst = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[run] != '\0')
	{
		if (s[run + 1] == '\0')
		{
			dst[i] = s[run];
			s[run] = '\0';
			run = 0;
			i++;
		}
		run++;
	}
	dst[i] = s[0];
	dst[i + 1] = '\0';
	return (dst);
}
