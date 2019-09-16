/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:01:51 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/09 14:17:12 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			run;
	unsigned char	*str;

	str = (unsigned char *)s;
	run = 0;
	if (n == 0)
		return ;
	while (run < n)
	{
		str[run] = 0;
		run++;
	}
	return ;
}
