/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:12:10 by pbodin            #+#    #+#             */
/*   Updated: 2020/06/30 11:35:00 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *haystack, const char *needle,
size_t len)
{
	size_t		i;
	size_t		j;
	size_t		remember;
	char		*ptr;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	if (needle[i] == '\0' && i < len)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		remember = i;
		while (needle[j] && i < len && haystack[i++] == needle[j])
			j++;
		ptr = (char *)&haystack[remember];
		if (needle[j] == '\0')
			return (ptr);
		i = remember;
		i++;
	}
	return (NULL);
}
