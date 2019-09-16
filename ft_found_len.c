/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 22:35:39 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/15 22:35:41 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_found_len(char *s, char c)
{
	size_t run;

	run = 0;
	while ((s[run] != c) && (s[run] != '\0'))
		run++;
	return (run);
}
