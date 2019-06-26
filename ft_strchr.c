/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:57:06 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 21:31:50 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	x;
	char	*ptr;

	i = 0;
	x = (char)c;
	ptr = (char *)s;
	while (*ptr != '\0')
	{
		while (*ptr != x)
		{
			ptr++;
			if (*ptr == '\0')
				return (NULL);
			else if (*ptr != '\0' && *ptr == x)
				return (ptr);
		}
	}
	return (NULL);
}
