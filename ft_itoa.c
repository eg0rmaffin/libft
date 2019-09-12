/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:54:02 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/08 15:12:39 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	nb;
	char		*str;
	int			run;

	nb = n;
	if (n < 0)
		nb = nb * -1;
	run = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_count_digits(nb))))
		return (NULL);
	while (nb / 10 != 0)
	{
		str[run] = ft_single_itoa(nb % 10);
		nb = nb / 10;
		run++;
	}
	str[run] = ft_single_itoa(nb % 10);
	str[run + 1] = '\0';
	if (n < 0)
		return (ft_get_negative(ft_strrev(str)));
	return (ft_strrev(str));
}
