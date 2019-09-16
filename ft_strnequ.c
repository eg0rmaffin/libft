/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:52:40 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/14 17:52:42 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1 != NULL) && (s2 != NULL))
	{
		if (ft_strncmp((char *)s1, (char *)s2, n) == 0)
			return (1);
		return (0);
	}
	return (0);
}
