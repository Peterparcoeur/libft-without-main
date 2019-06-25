/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:46:09 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/25 13:27:13 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	int 	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int			lenght_word(char *s, char c)
{
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] >= 96 && s[i] <= 123) || (s[i] >= 64 && s[i] <= 91))
			j++;
		while (s[i] != c)
		{
			if (s[i] == '\0')
				return (j);
			i++;
		}
		i++;
	}
	return (j);
}

char		**ft_strsplit(char *s, char c)
{
	int		i;
	int		j;
	int		remember;
	char	**ptr;
	int		numberofword;

	i = 0;
	j = 0;
	remember = 0;
	ptr = NULL;
	numberofword = lenght_word(s, c);
	if (!(ptr = malloc(sizeof(char**) * numberofword + 1)))
		return (NULL);
	while (s[i])
	{
		remember = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (!(ptr[j] = malloc(sizeof(char) * (i - remember + 1))))
			return (NULL);
		if (j < numberofword)
			ft_strncpy(ptr[j], &s[remember], i - remember);
		while (s[i] == c)
			i++;
		j++;
	}
	ptr[j] = NULL;
	return (ptr);
}
