/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:20:55 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/10 19:28:49 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t run;
	size_t i;

	run = 0;
	i = 0;
	while (dst[run] != '\0')
		run++;
	while (src[i] != '\0' && i < size)
	{
		dst[run] = src[i];
		run++;
		i++;
	}
	return (run);
}
