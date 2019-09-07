/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:54:02 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/07 16:55:43 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	single_itoa(int a)
{
	char	s;

	s = a + '0';
	return (s);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *s)
{
	char	*dst;
	int		run;
	int		i;

	run = 0;
	i = 0;
	dst = (char*)malloc(sizeof(char) * ft_strlen(s));
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
	return (dst);
}

char	*get_negative(char *s)
{
	char	*s2;
	int		run;
	int		i;

	run = 1;
	i = 0;
	s2 = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	s2[0] = '-';
	while (s[i] != '\0')
	{
		s2[run] = s[i];
		run++;
		i++;
	}
	return (s2);
}

char	*ft_itoa(int n)
{
	int		nb;
	char	*str;
	int		run;

	nb = n;
	if (n < 0)
		nb = nb * -1;
	run = 0;
	str = (char*)malloc(sizeof(char) * 12);
	while (nb / 10 != 0)
	{
		str[run] = single_itoa(nb % 10);
		nb = nb / 10;
		run++;
	}
	str[run] = single_itoa(nb % 10);
	if (n < 0)
		return (get_negative(ft_strrev(str)));
	return (ft_strrev(str));
}
