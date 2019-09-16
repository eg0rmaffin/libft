/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:22:42 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/11 22:22:45 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int run;
	int i;

	run = 0;
	if (needle[run] == '\0')
		return ((char*)(void *)haystack + (run));
	if (haystack[run] == '\0')
		return (NULL);
	while (haystack[run] != '\0')
	{
		i = 0;
		while (haystack[run + i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return ((char*)(void *)haystack + (run));
			i++;
		}
		run++;
	}
	return (NULL);
}
