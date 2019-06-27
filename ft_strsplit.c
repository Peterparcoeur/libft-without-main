/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 19:17:47 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/27 19:46:57 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**t;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (!(t = (char **)malloc(sizeof(char*) * (ft_wrdc((char *)s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		if (!(t[j] = ft_strnew(ft_wrdlen((char *)&s[i], c))))
			return (NULL);
		k = 0;
		while (s[i] != c && s[i])
			t[j][k++] = s[i++];
		t[j++][k] = '\0';
	}
	t[j] = NULL;
	return (t);
}
