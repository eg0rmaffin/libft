/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 22:16:04 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 22:37:23 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*dst;
	unsigned long int	run;

	dst = (unsigned char *)b;
	run = 0;
	while (run < len)
	{
		dst[run] = (unsigned char)c;
		run++;
	}
	return (b);
}
