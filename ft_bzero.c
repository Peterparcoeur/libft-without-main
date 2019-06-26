/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:47:13 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 19:16:22 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*buffer;

	i = 0;
	buffer = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		buffer[i] = 0;
		i++;
	}
}
