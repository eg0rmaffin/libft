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
	unsigned long int	i;
	unsigned long int	run;
	char				**arr;

	i = 0;
	run = 0;
	if (s == NULL)
		return (NULL);
	if (!(arr = (char**)malloc(sizeof(char*) * \
	ft_words_counter((char*)s, c) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if ((s[i] != c) && (s[i] != '\0'))
		{
			arr[run] = ft_create_str((char*)&s[i], c);
			run++;
			i = i + ft_found_len((char*)&s[i], c) + 1;
		}
	}
	arr[run] = NULL;
	return (arr);
}
