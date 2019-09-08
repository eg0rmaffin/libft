/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:39:15 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 15:57:22 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int run;

	run = 0;
	while (src[run] != '\0')
	{
		dst[run] = src[run];
		run++;
	}
	dst[run] = '\0';
	return (dst);
}
