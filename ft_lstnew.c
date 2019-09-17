/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:11:18 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/16 15:11:23 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *elem;

	if (content == NULL)
	{
		if (!(elem = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		elem->content = NULL;
		elem->content_size = 0;
		elem->next = NULL;
		return (elem);
	}
	if (!(elem = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(elem->content = malloc(content_size)))
		return (NULL);
	elem->content = ft_memcpy(elem->content, content, content_size);
	elem->content_size = content_size;
	elem->next = NULL;
	return (elem);
}
