/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:33:56 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/13 18:33:58 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(arr = (char**)malloc(sizeof(char*) * (ft_words_counter(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!(arr[i] = (char*)malloc(sizeof(char) * (ft_found_len(s, c)))))
				return (NULL);
			j = 0;
			while (*s != c && *s)
				arr[i][j++] = *(s++);
			arr[i++][j] = '\0';
		}
	}
	arr[i] = NULL;
	return (arr);
}
