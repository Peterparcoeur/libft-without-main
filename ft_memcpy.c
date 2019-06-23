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

void		*ft_memcpy(void *restrict dst, void *restrict src, size_t n)
{
	int		i;
	char	*str;
	char	*ptr;

	i = 0;
	str = (char *)dst;
	ptr = (char *)src;
	while (i < n)
	{
		str[i] = ptr[i];
		i++;
	}
	return (str);
}
