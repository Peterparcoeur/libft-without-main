/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:05:01 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/25 15:44:43 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;
	int	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc(sizeof(char) * (len))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
