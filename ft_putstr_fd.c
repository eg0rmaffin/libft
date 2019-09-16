/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 22:58:16 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/15 22:58:19 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t run;

	run = 0;
	if (s == NULL)
		return ;
	while (s[run] != '\0')
	{
		ft_putchar_fd(s[run], fd);
		run++;
	}
}
