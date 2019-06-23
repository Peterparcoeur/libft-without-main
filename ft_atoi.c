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

#define	ATOI str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int negative;
	int new;

	i = 0;
	while (ATOI)
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		new = new * 10;
		new = new + str[i] - 48;
		i++;
	}
	return (new * negative);
}