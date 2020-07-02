/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 13:38:55 by pbodin            #+#    #+#             */
/*   Updated: 2020/06/30 11:02:01 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (!(ptr = malloc(size * count)))
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
