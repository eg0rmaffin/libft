/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 22:53:37 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/15 22:53:39 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[10];
	int		run;
	int		sign;

	run = 0;
	sign = 1;
	if (n < 0)
		sign = -1;
	while (n > 9 || n < -9)
	{
		s[run++] = sign * (n % 10) + '0';
		n = n / 10;
	}
	s[run] = sign * (n % 10) + '0';
	if (sign == -1)
		write(fd, "-", 1);
	while (run >= 0)
	{
		write(fd, &(s[run]), 1);
		run--;
	}
}
