/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:12:10 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 22:09:27 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *haystack, const char *needle,
size_t len)
{
	size_t		i;
	size_t		j;
	size_t		remember;
	char	*ptr;

	i = 0;
	j = 0;
	if (needle[j] == '\0' && i < len)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		remember = i;
		while (haystack[i] == needle[j] && i < len)
		{
			i++;
			j++;
		}
		ptr = (char *)&haystack[remember];
		if (needle[j] == '\0')
			return (ptr);
		i++;
		if (haystack[i] == '\0')
			return (NULL);
	}
	return (NULL);
}
