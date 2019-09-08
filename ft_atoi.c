/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 05:58:24 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 20:09:43 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int sign;
	int res;

	sign = 1;
	res = 0;
	while (((*str > 8) && (*str < 14)) || (*str == 32))
		str++;
	if (*str == 45)
	{
		sign = 88;
		str++;
	}
	else if (*str == 43)
		str++;
	while ((*str > 47) && (*str < 58))
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	if (sign != 1)
	{
		res = -1 * res;
	}
	return (res);
}
