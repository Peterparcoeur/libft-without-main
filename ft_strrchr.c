/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:12:35 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 22:12:15 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	x;
	char	*ptr;

	x = (char)c;
	ptr = NULL;
	while (*s != '\0')
	{
		while (*s != x && *s != '\0')
			s++;
		while (*s == x)
		{
			ptr = (char *)s;
			s++;
		}
	}
	if (ptr == '\0')
		return (NULL);
	else
		return (ptr);
}
