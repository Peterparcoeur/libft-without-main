/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:51:52 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 20:29:28 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	char	*ptr;
	int		i;
	int		reste;
	int		j;

	str = NULL;
	ptr = NULL;
	i = 0;
	j = 0;
	if (!(str = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	if (!(ptr = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (n > 10)
	{
		reste = n % 10;
		n = n / 10;
		str[i] = (char)reste + 48;
		i++;
	}
	str[i] = (char)n + 48;
	str[i + 1] = '\0';
	while (i >= 0)
	{
		ptr[j] = str[i];
		i--;
		j++;
	}
	ptr[j + 1] = '\0';
	return (ptr);
}
