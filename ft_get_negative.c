/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_negative.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:18:43 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/11 22:18:48 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_negative(char *s)
{
	char	*s2;
	int		run;
	int		i;

	run = 1;
	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * ft_strlen(s) + 2)))
		return (NULL);
	s2[0] = '-';
	while (s[i] != '\0')
	{
		s2[run] = s[i];
		run++;
		i++;
	}
	s2[run] = '\0';
	return (s2);
}
