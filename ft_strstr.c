/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:14:06 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 22:18:51 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		remember;
	char	*ptr;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		remember = i;
		while (needle[j] && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		ptr = (char *)&haystack[remember];
		if (needle[j] == '\0')
			return (ptr);
		i = remember;
		i++;
	}
	return (0);
}
