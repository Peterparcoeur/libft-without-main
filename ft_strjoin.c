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

int			ft_strlen(char const *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	j = i;
	i = 0;
	while (s2[i])
		i++;
	return (i + j + 1);
}

char		*ft_strjoin(char const *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!(str = malloc(sizeof(char) * (ft_strlen(s1, s2)))))
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
