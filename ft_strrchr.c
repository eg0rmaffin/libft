/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:15:16 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/10 21:46:42 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int run;
	char *str;

	run = 0;
	str = (char *)s;
	if (s[0] != '\0')
	{
		while (s[run] != '\0')
			run++;
		while (s[run] != c)
			run--;
		return (&str[run]);
	}
	return (NULL);
}
