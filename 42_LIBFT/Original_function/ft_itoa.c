/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:59:48 by qcoudeyr          #+#    #+#             */
/*   Updated: 2023/04/21 22:54:19 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_intlen(long *n, long *pwr)
{
	long	len;
	long	val;

	len = 1;
	*pwr = 1;
	if (*n < 0)
	{
		len += 1;
		*n *= -1;
	}
	val = *n;
	while (val != 0)
	{
		if (val > 9)
			*pwr *= 10;
		val /= 10;
		len++;
	}
	return (len);
}

static void	*ft_strindexer(char *str, long *val, int *index, long *pwr)
{
	while (*pwr != 1)
	{
		str[*index] = (*val / *pwr) + 48;
		*val %= *pwr;
		*pwr /= 10;
		*index += 1;
	}
	str[*index] = *val +48;
	*index += 1;
	str[*index] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	pwr;
	int		index;
	long	val;

	index = 0;
	val = n;
	if (n == 0)
		str = malloc(sizeof(char) * 2);
	else
		str = malloc(sizeof(char) * ft_intlen(&val, &pwr));
	if (!str)
		return (NULL);
	if (n < 0)
		str[index++] = '-';
	if (n == 0)
		str[index++] = 0 +48;
	else
		ft_strindexer(str, &val, &index, &pwr);
	str[index] = 0;
	return (str);
}
