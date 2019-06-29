/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:15:15 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/29 12:08:23 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*new;

	i = 0;
	k = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (s[i] == '\0')
		return (new = ft_strdup(""));
	while (k > 0 && (s[k] == ' ' || s[k] == '\n' || s[k] == '\t'))
		k--;
	if (!(new = (char *)malloc(sizeof(char) * (k - i + 2))))
		return (NULL);
	new[k - i + 1] = '\0';
	j = 0;
	k = k - i + 1;
	while (j < k && s[i])
	{
		new[j] = s[i++];
		j++;
	}
	return (new);
}
