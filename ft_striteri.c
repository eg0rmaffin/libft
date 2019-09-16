/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 00:40:53 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/13 00:41:01 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int run;

	if ((s == NULL) || (f == NULL))
		return ;
	run = 0;
	while (s[run])
	{
		f(run, &s[run]);
		run++;
	}
}
