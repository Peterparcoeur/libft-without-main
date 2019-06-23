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

	if(!(new = malloc(sizeof(t_list))))
			return (NULL);
	while (lst)
	{
		if(!(new->content = malloc(sizeof(content_size))))
			return(NULL);
		new->content = f(lst);
		new->next = new;
		lst->next = lst;
	}
}
