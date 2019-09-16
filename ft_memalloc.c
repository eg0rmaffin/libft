/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:54:16 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/12 20:54:17 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	if (!(str = (unsigned char *)malloc((sizeof(unsigned char)) * size)))
		return (NULL);
	while (i < size)
		str[i++] = 0;
	return ((void *)str);
}
