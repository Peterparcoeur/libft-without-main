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

char			*ft_strnstr(char *haystack, char *needle, int len)
{
	int		i;
	int		j;
	int		remember;
	char	*ptr;

	i = 0;
	j = 0;
	if (needle[j] == '\0' && i < len)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		remember = i;
		while (haystack[i] == needle[j] && i < len)
		{
			i++;
			j++;
		}
		ptr = &haystack[remember];
		if (needle[j] == '\0')
			return (ptr);
		i++;
		if (haystack[i] == '\0')
			return (0);
	}
	return (0);
}
