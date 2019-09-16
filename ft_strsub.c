/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:56:47 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/14 17:56:51 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		run;
	char		*str;
	size_t		i;

	if (s == NULL)
		return (NULL);
	run = 0;
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (run < start)
		run++;
	while (len != 0)
	{
		str[i] = s[run];
		i++;
		run++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
