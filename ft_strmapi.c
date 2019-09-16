/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 01:27:38 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/13 01:28:27 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		run;
	char	*buff;

	run = 0;
	if ((s == NULL) || (f == NULL))
		return (NULL);
	while (s[run])
		run++;
	if (!(buff = (char *)malloc(sizeof(char) * run + 1)))
		return (NULL);
	run = 0;
	while (s[run])
	{
		buff[run] = f(run, (char)s[run]);
		run++;
	}
	buff[run] = '\0';
	return (buff);
}
