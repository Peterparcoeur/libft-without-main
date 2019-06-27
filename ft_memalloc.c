/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:53:13 by pbodin            #+#    #+#             */
/*   Updated: 2019/06/23 20:45:17 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if (!(str = malloc(sizeof(void *) * (size /*+ 1*/)))) // CEST PAS UNE STRING ATTENTION
		return (NULL);
	/*
	str = 0;
	MAIS WTF CEST QUOI CA
	*/
	ft_bzero(str, size);
	return (str);
}
