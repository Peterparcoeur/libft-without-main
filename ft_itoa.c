/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 19:44:08 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/27 19:44:10 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		reminder;
	char	*str;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	size = ft_intlen(n) + 1;
	sign = (n < 0) ? -1 : 1;
	if (n >= 0)
		size--;
	if (!(str = ft_strnew(size)))
		return (NULL);
	str[size--] = '\0';
	while (n != 0 && size >= 0)
	{
		reminder = (n % 10) * sign;
		str[size--] = reminder + '0';
		n /= 10;
	}
	if (sign < 0)
		str[size] = '-';
	return (str);
}
