/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:24:56 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/14 19:24:59 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*str;
	size_t		run;
	size_t		i;

	run = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * ft_tabulation_len(s) + 1)))
		return (NULL);
	while ((s[run] == ' ') || (s[run] == '\n') || (s[run] == '\t'))
		run++;
	while (i < ft_tabulation_len(s))
	{
		str[i] = s[run];
		run++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
