/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_single_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:18:32 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/11 22:18:36 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	ft_single_itoa(int a)
{
	char	s;

	s = a + '0';
	return (s);
}
