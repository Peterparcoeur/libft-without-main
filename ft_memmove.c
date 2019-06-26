/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:57:11 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 21:05:48 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char	*str;
	char	*ptr;

	i = 0;
	str = (char*)dst;
	ptr = (char *)src;
	while (str[i] && i < len)
	{
		str[i] = ptr[i];
		i++;
	}
	return (str);
}
