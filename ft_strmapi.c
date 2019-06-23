/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:06:56 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 21:58:56 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char *s, char (*f)(unsigned int, char)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (!s || !f)
		return ;
	while (s[i])
		i++;
	if (!(str = malloc(sizeof (char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s);
		i++;
	}
	return (str);
}
