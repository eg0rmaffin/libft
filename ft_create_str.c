/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 22:34:54 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/15 22:35:01 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_create_str(char *s, char c)
{
	size_t		i;
	char		*str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_found_len(s, c) + 1)))
		return (NULL);
	while ((s[i] != c) && (s[i] != '\0'))
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
