/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_counter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 22:35:25 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/15 22:35:27 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_words_counter(const char *s, char c)
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
			run = run + ft_found_len((char*)&s[run], c);
			words++;
		}
	}
	return (words);
}
