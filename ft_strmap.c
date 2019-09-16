/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 00:45:19 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/13 00:45:21 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		run;
	char	*buff;

	if (s == NULL)
		return (NULL);
	run = 0;
	while (s[run])
		run++;
	if (!(buff = (char *)malloc(sizeof(char) * run + 1)))
		return (NULL);
	run = 0;
	while (s[run])
	{
		buff[run] = f((char)s[run]);
		run++;
	}
	buff[run] = '\0';
	return (buff);
}
