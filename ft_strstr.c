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

char		*ft_strstr(char *haystack, char *needle)
{
	int		i;
	int		j;
	int		remember;
	char	*ptr;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		remember = i;
		while (haystack[i] == needle[j])
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
