/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:55:43 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 20:48:25 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char	*str;
	char	*ptr;

	i = 0;
	str = dst;
	ptr = (char *)src;
	while (i < n)
	{
		str[i] = ptr[i];
		i++;
	}
	return (str);
}
