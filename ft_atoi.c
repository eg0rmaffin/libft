/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 05:58:24 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 23:41:30 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		sign;
	size_t	res;

	sign = 1;
	res = 0;
	while (((*str > 8) && (*str < 14)) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		if (res <= 9223372036854775807)
			res = (res * 10) + (*str - '0');
		else if (sign == -1)
			return (0);
		else
			return (-1);
		str++;
	}
	return (res * sign);
}
