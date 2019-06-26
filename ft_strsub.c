/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:14:25 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 22:19:49 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * len - start + 1)))
		return (NULL);
	while (s[start] && start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
