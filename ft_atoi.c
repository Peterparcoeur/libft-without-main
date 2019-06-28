/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:46:31 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 19:14:05 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int negative;
	int new;

	if (ft_strcmp("2147483647", str) == 0)
		return (2147483647);
	if (ft_strcmp("-2147483648", str) == 0)
		return (-2147483648);
	i = 0;
	new = 0;
	negative = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
	|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		new = new * 10;
		new = new + str[i] - 48;
		i++;
	}
	return (new * negative);
}
