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

size_t      ft_found_len(char *s, char c)
{
	size_t run;

	run = 0;
	while ((s[run] != c) && (s[run] != '\0'))
		run++;
	return (run);
}

size_t     ft_words_counter(char *s, char c)
{
	size_t run;
	size_t words;

	run = 0;
	words = 0;
	while (s[run] != '\0')
	{
		if (s[run] == c)
			run++;
		if (s[run] != c)
		{
			run = run + ft_found_len((char*)&s[run], c) + 1;
			words++;

		}
	}
	return (words);
}

char		*ft_create_str(char *s, char c)
{
	size_t 	i;
	char 	*str;

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

char    **ft_strsplit(char const *s, char c)
{
	char 	**arr;
	size_t 	i;
	size_t 	run;

	i = 0;
	run = 0;
	if (s == NULL)
		return (NULL);
	if(!(arr = (char**)malloc(sizeof(char*) * ft_words_counter((char*)s, c) + 1)))
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
