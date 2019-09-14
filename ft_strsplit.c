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



int		ft_words_counter(char *s, char c)
{
	int words;
	int run;

	words = 0;
	run = 0;
	while (s[run])
	{
		while (s[run] == c)
			run++;
		if (s[run + 1] == c)
			words++;
		run++;
	}
	return (words);
}

//int		ft_lits_counter(char *s, char c)
//{
//	int lits;
//	int run;
//
//	lits = 0;
//	run = 0;
//	while (s[run])
//	{
//		while (s[run] == c)
//			run++;
//		run++;
//		lits++;
//	}
//	return (lits - 1);
//}

char	*ft_create_str(int len)        //создавает строчку выделяет под нее память
{
	char *str;
	str = (char *)malloc(sizeof(char) * (len + 1));
	return (str);
}


int		ft_found_len(char *s, char c)
{
	int run;

	run = 0;
	while (s[run] != c)
		run++;
	return (run);
}

char	**ft_strsplit(char const *s, char c)
{
	int i;        //индекс строчки в двумерном массиве
//	char *p;
	char **arr;
	int run;

	i = 0;
	run = 0;
	arr = (char**)malloc(sizeof(char*) * (ft_words_counter(s, c) + 1));   //все ок точно ок
//	while (s[i])
//	{
//		while (s[i] == c)
//			i++;
//		if (s[i] != c)
//			*arr[run] = (char *) malloc(sizeof(char) * (ft_lits_counter(s + run, c) + 1));
//			run++;
//		i++;
//	}
//	return (arr);
	while (s[run])
	{
		while (s[run] == c)
			run++;
		if (s[run] != c)
		{
			arr[i] = ft_create_str(ft_found_len((void *)(char *)s + run, c));
			i++;
			run = run + ft_found_len((void *)(char *)s + run, c) + 1;
		}
	}
	return (arr);
}
