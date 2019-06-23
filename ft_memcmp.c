/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:54:10 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 21:00:25 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*ptr;
	char	*str;

	i = 0;
	ptr = (char *)s1;
	str = (char *)s2;
	while (ptr[i] == str[i] && i < n)
		i++;
	return (ptr[i] - str[i]);
}
