/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabulation_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:23:35 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/14 20:23:37 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_tabulation_len(char const *s)
{
	size_t		run;
	size_t		run2;

	run = 0;
	run2 = 0;
	if (s == NULL)
		return (0);
	while ((s[run] == ' ') || (s[run] == '\n') || (s[run] == '\t'))
		run++;
	if (s[run] == '\0')
		return (0);
	run2 = ft_strlen((char *)s) - 1;
	while ((s[run2] == ' ') || (s[run2] == '\n') || (s[run2] == '\t'))
		run2--;
	run2 = ft_strlen((char *)s) - run2;
	return (ft_strlen((char *)s) - run - run2 + 1);
}
