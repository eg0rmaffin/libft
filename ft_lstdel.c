/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:07:44 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/16 18:07:46 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*buff;

	while (*alst)
	{
		buff = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
		*alst = buff;
	}
}
