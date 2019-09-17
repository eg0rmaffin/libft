/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:54:29 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/17 22:54:34 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*rtrn;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = f(lst);
	rtrn = current;
	lst = lst->next;
	while (lst)
	{
		current->next = f(lst);
		current = current->next;
		lst = lst->next;
	}
	return (rtrn);
}
