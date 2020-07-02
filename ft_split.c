/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:17:25 by pbodin            #+#    #+#             */
/*   Updated: 2020/07/01 09:36:13 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int			i;
	int			word;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

static	int		len_words(char const *s, char c)
{
	int			len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static	void	*leak(char **forwords, int words)
{
	int			i;

	i = 0;
	while (i < words)
	{
		free(forwords[i]);
		i++;
	}
	free(forwords);
	return (NULL);
}

static char		**copypaste_word(char const *src, char **dst, char c, int words)
{
	int			i;
	int			j;
	int			len;

	i = -1;
	while (++i < words)
	{
		j = 0;
		while (*src == c)
			src++;
		len = len_words(src, c);
		if (!(dst[i] = malloc(sizeof(char) * len + 1)))
			return (leak(dst, words));
		while (j < len && src)
			dst[i][j++] = *src++;
		dst[i][j] = '\0';
	}
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char		**forwords;
	int			words;

	words = count_words(s, c);
	if (!(forwords = malloc(sizeof(char *) * words + 1)))
		return (NULL);
	forwords = copypaste_word(s, forwords, c, words);
	return (forwords);
}
