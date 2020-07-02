/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 15:33:53 by pbodin            #+#    #+#             */
/*   Updated: 2020/07/01 08:25:04 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s && !start)
		return (NULL);
	if (!(new = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
