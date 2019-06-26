/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:23:43 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 18:44:02 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	if (!(new->content = malloc(sizeof(content_size))))
			return (NULL);
	ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	new->content = NULL;
	return (new);
}		
