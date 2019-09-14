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

size_t		ft_found_len(char *s, char c)
{
	size_t run;

	run = 0;
	while (s[run] != c)
		run++;
	return (run);
}


char	**ft_strsplit(char const *s, char c)
{
	char		**arr;
	size_t		run;
	size_t		i;

	i = 0;
	run = 0;
	arr = (char**)malloc(sizeof(char*) * (ft_words_counter((char *)s, c) + 1));   //все ок точно ок
	while (s[run])
	{
		while (s[run] == c)
			run++;
		if (s[run] != c)
		{
			arr[i] = ft_strsub(((char *)s + run), 0, ft_found_len((char *)s + run, c));
			i++;
			run = run + ft_found_len((char *)s + run, c) + 1;
		}
	}
	return (arr);
}




//int main() {
//	char *s = "      split       this for   me  !       ";
//	char **arr = ft_strsplit(s, ' ');

//	for(int i = 0; i < ft_words_counter(s, ' '); i++)
//	{
//		free(arr[i]);
//	}
//	free(arr);

//	printf("%s\n", arr[0]);
//	printf("%s\n", arr[1]);
//	printf("%s\n", arr[2]);
//	printf("%s\n", arr[3]);
//	     printf("%s\n", arr[4]);
//	     printf("%s\n", arr[5]);
//
//	     printf("%d\n", ft_words_counter(s, ' '));
//}
