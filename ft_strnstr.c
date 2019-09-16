/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:00:44 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/12 17:00:47 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t run;
	size_t i;

	run = 0;
	if (needle[run] == '\0')
		return ((char*)(void *)haystack + (run));
	if (haystack[run] == '\0')
		return (NULL);
	while (haystack[run] != '\0' && run < len)
	{
		i = 0;
		while ((haystack[run + i] == needle[i]) && (run + i < len))
		{
			if (needle[i + 1] == '\0')
				return ((char*)(void *)haystack + (run));
			i++;
		}
		run++;
	}
	return (NULL);
}
