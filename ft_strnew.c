/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 22:30:04 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/12 22:30:07 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	run;

	run = 0;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (run <= size)
	{
		str[run] = '\0';
		run++;
	}
	return ((void *)str);
}
