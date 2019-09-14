/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:36:35 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/14 18:36:36 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	run;
	size_t	size;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	run = 0;
	i = 0;
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (s1[run])
	{
		str[run] = s1[run];
		run++;
	}
	while (s2[i])
	{
		str[run] = s2[i];
		run++;
		i++;
	}
	str[run] = '\0';
	return (str);
}
