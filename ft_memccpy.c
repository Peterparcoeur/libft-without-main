/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:53:32 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 20:55:47 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	*str;
	unsigned char	*ptr;

	i = 0;
	str = (unsigned char*)dst;
	ptr = (unsigned char*)src;
	while (i < n)
	{
		str[i] = ptr[i];
		if (c == (unsigned char)c)
			return (dst + 1);
		i++;
	}
	return (NULL);
}
