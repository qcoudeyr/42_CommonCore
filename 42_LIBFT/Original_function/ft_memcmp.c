/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:52:08 by qcoudeyr          #+#    #+#             */
/*   Updated: 2023/04/21 22:54:56 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	dif;

	if (n == 0)
		return (0);
	while (n > 0)
	{
		dif = *(unsigned char *)s1 - *(unsigned char *)s2;
		if (dif != 0)
			break ;
		n--;
		s1++;
		s2++;
	}
	return (dif);
}
