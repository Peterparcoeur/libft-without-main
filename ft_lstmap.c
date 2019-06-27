/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 18:10:13 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 18:50:09 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*head;

	if (!lst)
		return (NULL);
	head = f(lst);
	new = head;
	while (lst->next)
	{
		lst = lst->next;
		head->next = f(lst);
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (new);
}
