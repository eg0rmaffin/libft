/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:46:35 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/09 15:58:11 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t run;
	size_t i;

	run = 0;
	i = 0;
	while (s1[run] != '\0')
		run++;
	if (n == 0)
		return (s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[run] = s2[i];
		run++;
		i++;
	}
	s1[run] = '\0';
	return (s1);
}
