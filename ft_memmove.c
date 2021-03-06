/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:57:11 by pbodin            #+#    #+#             */
/*   Updated: 2020/06/30 10:58:59 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str;
	char	*ptr;

	str = (char *)dst;
	ptr = (char *)src;
	i = len;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (i--)
			str[i] = ptr[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			str[i] = ptr[i];
			i++;
		}
	}
	return (dst);
}
