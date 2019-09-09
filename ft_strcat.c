/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:39:10 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/09 15:04:22 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int run;
	int i;

	run = 0;
	i = 0;
	while (s1[run] != '\0')
		run++;
	while (s2[i] != '\0')
	{
		s1[run] = s2[i];
		run++;
		i++;
	}
	s1[run] = '\0';
	return (s1);
}
