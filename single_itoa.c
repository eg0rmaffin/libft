/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 23:54:20 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/07 23:55:14 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	single_itoa(int a)
{
	char	s;

	s = a + '0';
	return (s);
}
